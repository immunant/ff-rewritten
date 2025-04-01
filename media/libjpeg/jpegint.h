/*
 * jpegint.h
 *
 * This file was part of the Independent JPEG Group's software:
 * Copyright (C) 1991-1997, Thomas G. Lane.
 * Modified 1997-2009 by Guido Vollbeding.
 * Lossless JPEG Modifications:
 * Copyright (C) 1999, Ken Murchison.
 * libjpeg-turbo Modifications:
 * Copyright (C) 2015-2017, 2019, 2021-2022, 2024, D. R. Commander.
 * Copyright (C) 2015, Google, Inc.
 * Copyright (C) 2021, Alex Richardson.
 * For conditions of distribution and use, see the accompanying README.ijg
 * file.
 *
 * This file provides common declarations for the various JPEG modules.
 * These declarations are considered internal to the JPEG library; most
 * applications using the library shouldn't need to include this file.
 */


/* Representation of a spatial difference value.
 * This should be a signed value of at least 16 bits; int is usually OK.
 */

typedef int JDIFF;

typedef JDIFF FAR *JDIFFROW;    /* pointer to one row of difference values */
typedef JDIFFROW *JDIFFARRAY;   /* ptr to some rows (a 2-D diff array) */
typedef JDIFFARRAY *JDIFFIMAGE; /* a 3-D diff array: top index is color */


/* Declarations for both compression & decompression */

typedef enum {            /* Operating modes for buffer controllers */
  JBUF_PASS_THRU,         /* Plain stripwise operation */
  /* Remaining modes require a full-image buffer to have been created */
  JBUF_SAVE_SOURCE,       /* Run source subobject only, save output */
  JBUF_CRANK_DEST,        /* Run dest subobject only, using saved data */
  JBUF_SAVE_AND_PASS      /* Run both subobjects, save output */
} J_BUF_MODE;

/* Values of global_state field (jdapi.c has some dependencies on ordering!) */
#define CSTATE_START     100    /* after create_compress */
#define CSTATE_SCANNING  101    /* start_compress done, write_scanlines OK */
#define CSTATE_RAW_OK    102    /* start_compress done, write_raw_data OK */
#define CSTATE_WRCOEFS   103    /* jpeg_write_coefficients done */
#define DSTATE_START     200    /* after create_decompress */
#define DSTATE_INHEADER  201    /* reading header markers, no SOS yet */
#define DSTATE_READY     202    /* found SOS, ready for start_decompress */
#define DSTATE_PRELOAD   203    /* reading multiscan file in start_decompress*/
#define DSTATE_PRESCAN   204    /* performing dummy pass for 2-pass quant */
#define DSTATE_SCANNING  205    /* start_decompress done, read_scanlines OK */
#define DSTATE_RAW_OK    206    /* start_decompress done, read_raw_data OK */
#define DSTATE_BUFIMAGE  207    /* expecting jpeg_start_output */
#define DSTATE_BUFPOST   208    /* looking for SOS/EOI in jpeg_finish_output */
#define DSTATE_RDCOEFS   209    /* reading file in jpeg_read_coefficients */
#define DSTATE_STOPPING  210    /* looking for EOI in jpeg_finish_decompress */


/* JLONG must hold at least signed 32-bit values. */
typedef long JLONG;

/* JUINTPTR must hold pointer values. */
#ifdef __UINTPTR_TYPE__
/*
 * __UINTPTR_TYPE__ is GNU-specific and available in GCC 4.6+ and Clang 3.0+.
 * Fortunately, that is sufficient to support the few architectures for which
 * sizeof(void *) != sizeof(size_t).  The only other options would require C99
 * or Clang-specific builtins.
 */
typedef __UINTPTR_TYPE__ JUINTPTR;
#else
typedef size_t JUINTPTR;
#endif

#define IsExtRGB(cs) \
  (cs == JCS_RGB || (cs >= JCS_EXT_RGB && cs <= JCS_EXT_ARGB))

/*
 * Left shift macro that handles a negative operand without causing any
 * sanitizer warnings
 */

#define LEFT_SHIFT(a, b)  ((JLONG)((unsigned long)(a) << (b)))


/* Declarations for compression modules */

/* Master control module */
struct jpeg_comp_master {
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structE prepare_for_pass;
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structE pass_startup;
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structE finish_pass;

  /* State variables made visible to other modules */
  boolean call_pass_startup;    /* True if pass_startup must be called */
  boolean is_last_pass;         /* True during last pass */
  boolean lossless;             /* True if lossless mode is enabled */
};

/* Main buffer control (downsampled-data buffer) */
struct jpeg_c_main_controller {
  struct IA2_fnptr__ZTSFvP20jpeg_compress_struct10J_BUF_MODEE start_pass;
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structPPhPjjE process_data;
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structPPsPjjE process_data_12;
#ifdef C_LOSSLESS_SUPPORTED
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structPPtPjjE process_data_16;
#endif
};

/* Compression preprocessing (downsampling input buffer control) */
struct jpeg_c_prep_controller {
  struct IA2_fnptr__ZTSFvP20jpeg_compress_struct10J_BUF_MODEE start_pass;
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structPPhPjjPS2_S3_jE pre_process_data;
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structPPsPjjPS2_S3_jE pre_process_data_12;
#ifdef C_LOSSLESS_SUPPORTED
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structPPtPjjPS2_S3_jE pre_process_data_16;
#endif
};

/* Lossy mode: Coefficient buffer control
 * Lossless mode: Difference buffer control
 */
struct jpeg_c_coef_controller {
  struct IA2_fnptr__ZTSFvP20jpeg_compress_struct10J_BUF_MODEE start_pass;
  struct IA2_fnptr__ZTSFiP20jpeg_compress_structPPPhE compress_data;
  struct IA2_fnptr__ZTSFiP20jpeg_compress_structPPPsE compress_data_12;
#ifdef C_LOSSLESS_SUPPORTED
  struct IA2_fnptr__ZTSFiP20jpeg_compress_structPPPtE compress_data_16;
#endif
};

/* Colorspace conversion */
struct jpeg_color_converter {
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structE start_pass;
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structPPhPS2_jiE color_convert;
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structPPsPS2_jiE color_convert_12;
#ifdef C_LOSSLESS_SUPPORTED
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structPPtPS2_jiE color_convert_16;
#endif
};

/* Downsampling */
struct jpeg_downsampler {
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structE start_pass;
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structPPPhjS3_jE downsample;
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structPPPsjS3_jE downsample_12;
#ifdef C_LOSSLESS_SUPPORTED
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structPPPtjS3_jE downsample_16;
#endif

  boolean need_context_rows;    /* TRUE if need rows above & below */
};

/* Lossy mode: Forward DCT (also controls coefficient quantization)
 * Lossless mode: Prediction, sample differencing, and point transform
 */
struct jpeg_forward_dct {
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structE start_pass;

  /* Lossy mode */
  /* perhaps this should be an array??? */
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structP19jpeg_component_infoPPhPA64_sjjjE forward_DCT;
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structP19jpeg_component_infoPPsPA64_sjjjE forward_DCT_12;
};

/* Entropy encoding */
struct jpeg_entropy_encoder {
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structiE start_pass;

  /* Lossy mode */
  struct IA2_fnptr__ZTSFiP20jpeg_compress_structPPA64_sE encode_mcu;
  /* Lossless mode */
  struct IA2_fnptr__ZTSFjP20jpeg_compress_structPPPijjjE encode_mcus;

  struct IA2_fnptr__ZTSFvP20jpeg_compress_structE finish_pass;
};

/* Marker writing */
struct jpeg_marker_writer {
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structE write_file_header;
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structE write_frame_header;
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structE write_scan_header;
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structE write_file_trailer;
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structE write_tables_only;
  /* These routines are exported to allow insertion of extra markers */
  /* Probably only COM and APPn markers should be written this way */
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structijE write_marker_header;
  struct IA2_fnptr__ZTSFvP20jpeg_compress_structiE write_marker_byte;
};


/* Declarations for decompression modules */

/* Master control module */
struct jpeg_decomp_master {
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE prepare_for_output_pass;
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE finish_output_pass;

  /* State variables made visible to other modules */
  boolean is_dummy_pass;        /* True during 1st pass for 2-pass quant */
  boolean lossless;             /* True if decompressing a lossless image */

  /* Partial decompression variables */
  JDIMENSION first_iMCU_col;
  JDIMENSION last_iMCU_col;
  JDIMENSION first_MCU_col[MAX_COMPONENTS];
  JDIMENSION last_MCU_col[MAX_COMPONENTS];
  boolean jinit_upsampler_no_alloc;

  /* Last iMCU row that was successfully decoded */
  JDIMENSION last_good_iMCU_row;

  /* Tail of list of saved markers */
  jpeg_saved_marker_ptr marker_list_end;
};

/* Input control module */
struct jpeg_input_controller {
  struct IA2_fnptr__ZTSFiP22jpeg_decompress_structE consume_input;
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE reset_input_controller;
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE start_input_pass;
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE finish_input_pass;

  /* State variables made visible to other modules */
  boolean has_multiple_scans;   /* True if file has multiple scans */
  boolean eoi_reached;          /* True when EOI has been consumed */
};

/* Main buffer control (downsampled-data buffer) */
struct jpeg_d_main_controller {
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_struct10J_BUF_MODEE start_pass;
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structPPhPjjE process_data;
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structPPsPjjE process_data_12;
#ifdef D_LOSSLESS_SUPPORTED
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structPPtPjjE process_data_16;
#endif
};

/* Lossy mode: Coefficient buffer control
 * Lossless mode: Difference buffer control
 */
struct jpeg_d_coef_controller {
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE start_input_pass;
  struct IA2_fnptr__ZTSFiP22jpeg_decompress_structE consume_data;
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE start_output_pass;
  struct IA2_fnptr__ZTSFiP22jpeg_decompress_structPPPhE decompress_data;
  struct IA2_fnptr__ZTSFiP22jpeg_decompress_structPPPsE decompress_data_12;
#ifdef D_LOSSLESS_SUPPORTED
  struct IA2_fnptr__ZTSFiP22jpeg_decompress_structPPPtE decompress_data_16;
#endif

  /* These variables keep track of the current location of the input side. */
  /* cinfo->input_iMCU_row is also used for this. */
  JDIMENSION MCU_ctr;           /* counts MCUs processed in current row */
  int MCU_vert_offset;          /* counts MCU rows within iMCU row */
  int MCU_rows_per_iMCU_row;    /* number of such rows needed */

  /* The output side's location is represented by cinfo->output_iMCU_row. */

  /* Lossy mode */
  /* Pointer to array of coefficient virtual arrays, or NULL if none */
  jvirt_barray_ptr *coef_arrays;
};

/* Decompression postprocessing (color quantization buffer control) */
struct jpeg_d_post_controller {
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_struct10J_BUF_MODEE start_pass;
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structPPPhPjjS2_S4_jE post_process_data;
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structPPPsPjjS2_S4_jE post_process_data_12;
#ifdef D_LOSSLESS_SUPPORTED
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structPPPtPjjS2_S4_jE post_process_data_16;
#endif
};

/* Marker reading & parsing */
struct jpeg_marker_reader {
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE reset_marker_reader;
  /* Read markers until SOS or EOI.
   * Returns same codes as are defined for jpeg_consume_input:
   * JPEG_SUSPENDED, JPEG_REACHED_SOS, or JPEG_REACHED_EOI.
   */
  struct IA2_fnptr__ZTSFiP22jpeg_decompress_structE read_markers;
  /* Read a restart marker --- exported for use by entropy decoder only */
  jpeg_marker_parser_method read_restart_marker;

  /* State of marker reader --- nominally internal, but applications
   * supplying COM or APPn handlers might like to know the state.
   */
  boolean saw_SOI;              /* found SOI? */
  boolean saw_SOF;              /* found SOF? */
  int next_restart_num;         /* next restart number expected (0-7) */
  unsigned int discarded_bytes; /* # of bytes skipped looking for a marker */
};

/* Entropy decoding */
struct jpeg_entropy_decoder {
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE start_pass;

  /* Lossy mode */
  struct IA2_fnptr__ZTSFiP22jpeg_decompress_structPPA64_sE decode_mcu;
  /* Lossless mode */
  struct IA2_fnptr__ZTSFjP22jpeg_decompress_structPPPijjjE decode_mcus;
  struct IA2_fnptr__ZTSFiP22jpeg_decompress_structE process_restart;

  /* This is here to share code between baseline and progressive decoders; */
  /* other modules probably should not use it */
  boolean insufficient_data;    /* set TRUE after emitting warning */
};

/* Lossy mode: Inverse DCT (also performs dequantization)
 * Lossless mode: Prediction, sample undifferencing, point transform, and
 * sample size scaling
 */
typedef struct IA2_fnptr__ZTSFvP22jpeg_decompress_structP19jpeg_component_infoPsPPhjE inverse_DCT_method_ptr;
typedef struct IA2_fnptr__ZTSFvP22jpeg_decompress_structP19jpeg_component_infoPsPS3_jE inverse_DCT_12_method_ptr;

struct jpeg_inverse_dct {
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE start_pass;

  /* Lossy mode */
  /* It is useful to allow each component to have a separate IDCT method. */
  inverse_DCT_method_ptr inverse_DCT[MAX_COMPONENTS];
  inverse_DCT_12_method_ptr inverse_DCT_12[MAX_COMPONENTS];
};

/* Upsampling (note that upsampler must also call color converter) */
struct jpeg_upsampler {
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE start_pass;
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structPPPhPjjS2_S4_jE upsample;
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structPPPsPjjS2_S4_jE upsample_12;
#ifdef D_LOSSLESS_SUPPORTED
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structPPPtPjjS2_S4_jE upsample_16;
#endif

  boolean need_context_rows;    /* TRUE if need rows above & below */
};

/* Colorspace conversion */
struct jpeg_color_deconverter {
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE start_pass;
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structPPPhjS2_iE color_convert;
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structPPPsjS2_iE color_convert_12;
#ifdef D_LOSSLESS_SUPPORTED
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structPPPtjS2_iE color_convert_16;
#endif
};

/* Color quantization or color precision reduction */
struct jpeg_color_quantizer {
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structiE start_pass;
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structPPhS2_iE color_quantize;
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structPPsS2_iE color_quantize_12;
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE finish_pass;
  struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE new_color_map;
};


/* Miscellaneous useful macros */

#undef MAX
#define MAX(a, b)       ((a) > (b) ? (a) : (b))
#undef MIN
#define MIN(a, b)       ((a) < (b) ? (a) : (b))

#ifdef ZERO_BUFFERS
#define MALLOC(size)  calloc(1, size)
#else
#define MALLOC(size)  malloc(size)
#endif


/* We assume that right shift corresponds to signed division by 2 with
 * rounding towards minus infinity.  This is correct for typical "arithmetic
 * shift" instructions that shift in copies of the sign bit.  But some
 * C compilers implement >> with an unsigned shift.  For these machines you
 * must define RIGHT_SHIFT_IS_UNSIGNED.
 * RIGHT_SHIFT provides a proper signed right shift of a JLONG quantity.
 * It is only applied with constant shift counts.  SHIFT_TEMPS must be
 * included in the variables of any routine using RIGHT_SHIFT.
 */

#ifdef RIGHT_SHIFT_IS_UNSIGNED
#define SHIFT_TEMPS     JLONG shift_temp;
#define RIGHT_SHIFT(x, shft) \
  ((shift_temp = (x)) < 0 ? \
   (shift_temp >> (shft)) | ((~((JLONG)0)) << (32 - (shft))) : \
   (shift_temp >> (shft)))
#else
#define SHIFT_TEMPS
#define RIGHT_SHIFT(x, shft)    ((x) >> (shft))
#endif


/* Compression module initialization routines */
EXTERN(void) jinit_compress_master(j_compress_ptr cinfo);
EXTERN(void) jinit_c_master_control(j_compress_ptr cinfo,
                                    boolean transcode_only);
EXTERN(void) jinit_c_main_controller(j_compress_ptr cinfo,
                                     boolean need_full_buffer);
EXTERN(void) j12init_c_main_controller(j_compress_ptr cinfo,
                                       boolean need_full_buffer);
EXTERN(void) jinit_c_prep_controller(j_compress_ptr cinfo,
                                     boolean need_full_buffer);
EXTERN(void) j12init_c_prep_controller(j_compress_ptr cinfo,
                                       boolean need_full_buffer);
EXTERN(void) jinit_c_coef_controller(j_compress_ptr cinfo,
                                     boolean need_full_buffer);
EXTERN(void) j12init_c_coef_controller(j_compress_ptr cinfo,
                                       boolean need_full_buffer);
EXTERN(void) jinit_color_converter(j_compress_ptr cinfo);
EXTERN(void) j12init_color_converter(j_compress_ptr cinfo);
EXTERN(void) jinit_downsampler(j_compress_ptr cinfo);
EXTERN(void) j12init_downsampler(j_compress_ptr cinfo);
EXTERN(void) jinit_forward_dct(j_compress_ptr cinfo);
EXTERN(void) j12init_forward_dct(j_compress_ptr cinfo);
EXTERN(void) jinit_huff_encoder(j_compress_ptr cinfo);
EXTERN(void) jinit_phuff_encoder(j_compress_ptr cinfo);
EXTERN(void) jinit_arith_encoder(j_compress_ptr cinfo);
EXTERN(void) jinit_marker_writer(j_compress_ptr cinfo);
#ifdef C_LOSSLESS_SUPPORTED
EXTERN(void) j16init_c_main_controller(j_compress_ptr cinfo,
                                       boolean need_full_buffer);
EXTERN(void) j16init_c_prep_controller(j_compress_ptr cinfo,
                                       boolean need_full_buffer);
EXTERN(void) j16init_color_converter(j_compress_ptr cinfo);
EXTERN(void) j16init_downsampler(j_compress_ptr cinfo);
EXTERN(void) jinit_c_diff_controller(j_compress_ptr cinfo,
                                     boolean need_full_buffer);
EXTERN(void) j12init_c_diff_controller(j_compress_ptr cinfo,
                                       boolean need_full_buffer);
EXTERN(void) j16init_c_diff_controller(j_compress_ptr cinfo,
                                       boolean need_full_buffer);
EXTERN(void) jinit_lhuff_encoder(j_compress_ptr cinfo);
EXTERN(void) jinit_lossless_compressor(j_compress_ptr cinfo);
EXTERN(void) j12init_lossless_compressor(j_compress_ptr cinfo);
EXTERN(void) j16init_lossless_compressor(j_compress_ptr cinfo);
#endif

/* Decompression module initialization routines */
EXTERN(void) jinit_master_decompress(j_decompress_ptr cinfo);
EXTERN(void) jinit_d_main_controller(j_decompress_ptr cinfo,
                                     boolean need_full_buffer);
EXTERN(void) j12init_d_main_controller(j_decompress_ptr cinfo,
                                       boolean need_full_buffer);
EXTERN(void) jinit_d_coef_controller(j_decompress_ptr cinfo,
                                     boolean need_full_buffer);
EXTERN(void) j12init_d_coef_controller(j_decompress_ptr cinfo,
                                       boolean need_full_buffer);
EXTERN(void) jinit_d_post_controller(j_decompress_ptr cinfo,
                                     boolean need_full_buffer);
EXTERN(void) j12init_d_post_controller(j_decompress_ptr cinfo,
                                       boolean need_full_buffer);
EXTERN(void) jinit_input_controller(j_decompress_ptr cinfo);
EXTERN(void) jinit_marker_reader(j_decompress_ptr cinfo);
EXTERN(void) jinit_huff_decoder(j_decompress_ptr cinfo);
EXTERN(void) jinit_phuff_decoder(j_decompress_ptr cinfo);
EXTERN(void) jinit_arith_decoder(j_decompress_ptr cinfo);
EXTERN(void) jinit_inverse_dct(j_decompress_ptr cinfo);
EXTERN(void) j12init_inverse_dct(j_decompress_ptr cinfo);
EXTERN(void) jinit_upsampler(j_decompress_ptr cinfo);
EXTERN(void) j12init_upsampler(j_decompress_ptr cinfo);
EXTERN(void) jinit_color_deconverter(j_decompress_ptr cinfo);
EXTERN(void) j12init_color_deconverter(j_decompress_ptr cinfo);
EXTERN(void) jinit_1pass_quantizer(j_decompress_ptr cinfo);
EXTERN(void) j12init_1pass_quantizer(j_decompress_ptr cinfo);
EXTERN(void) jinit_2pass_quantizer(j_decompress_ptr cinfo);
EXTERN(void) j12init_2pass_quantizer(j_decompress_ptr cinfo);
EXTERN(void) jinit_merged_upsampler(j_decompress_ptr cinfo);
EXTERN(void) j12init_merged_upsampler(j_decompress_ptr cinfo);
#ifdef D_LOSSLESS_SUPPORTED
EXTERN(void) j16init_d_main_controller(j_decompress_ptr cinfo,
                                       boolean need_full_buffer);
EXTERN(void) j16init_d_post_controller(j_decompress_ptr cinfo,
                                       boolean need_full_buffer);
EXTERN(void) j16init_upsampler(j_decompress_ptr cinfo);
EXTERN(void) j16init_color_deconverter(j_decompress_ptr cinfo);
EXTERN(void) jinit_d_diff_controller(j_decompress_ptr cinfo,
                                     boolean need_full_buffer);
EXTERN(void) j12init_d_diff_controller(j_decompress_ptr cinfo,
                                       boolean need_full_buffer);
EXTERN(void) j16init_d_diff_controller(j_decompress_ptr cinfo,
                                       boolean need_full_buffer);
EXTERN(void) jinit_lhuff_decoder(j_decompress_ptr cinfo);
EXTERN(void) jinit_lossless_decompressor(j_decompress_ptr cinfo);
EXTERN(void) j12init_lossless_decompressor(j_decompress_ptr cinfo);
EXTERN(void) j16init_lossless_decompressor(j_decompress_ptr cinfo);
#endif

/* Memory manager initialization */
EXTERN(void) jinit_memory_mgr(j_common_ptr cinfo);

/* Utility routines in jutils.c */
EXTERN(long) jdiv_round_up(long a, long b);
EXTERN(long) jround_up(long a, long b);
EXTERN(void) jcopy_sample_rows(JSAMPARRAY input_array, int source_row,
                               JSAMPARRAY output_array, int dest_row,
                               int num_rows, JDIMENSION num_cols);
EXTERN(void) j12copy_sample_rows(J12SAMPARRAY input_array, int source_row,
                                 J12SAMPARRAY output_array, int dest_row,
                                 int num_rows, JDIMENSION num_cols);
#if defined(C_LOSSLESS_SUPPORTED) || defined(D_LOSSLESS_SUPPORTED)
EXTERN(void) j16copy_sample_rows(J16SAMPARRAY input_array, int source_row,
                                 J16SAMPARRAY output_array, int dest_row,
                                 int num_rows, JDIMENSION num_cols);
#endif
EXTERN(void) jcopy_block_row(JBLOCKROW input_row, JBLOCKROW output_row,
                             JDIMENSION num_blocks);
EXTERN(void) jzero_far(void *target, size_t bytestozero);
/* Constant tables in jutils.c */
#if 0                           /* This table is not actually needed in v6a */
extern const int jpeg_zigzag_order[]; /* natural coef order to zigzag order */
#endif
extern const int jpeg_natural_order[]; /* zigzag coef order to natural order */

/* Arithmetic coding probability estimation tables in jaricom.c */
extern const JLONG jpeg_aritab[];
