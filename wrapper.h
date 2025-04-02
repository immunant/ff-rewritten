#ifndef __ASSEMBLER__

#include <ia2.h>
#include <scrub_registers.h>

extern struct IA2_fnptr__ZTSFvP18jpeg_common_structE __ia2_ErrorHandler;
extern struct IA2_fnptr__ZTSF8nsresultP14nsIInputStreamPvPKcjjPjE __ia2_NS_CopySegmentToBuffer;
asm(
  ".set __ia2_NS_CopySegmentToBuffer, __real_NS_CopySegmentToBuffer\n"
);
extern struct IA2_fnptr__ZTSFvP18jpeg_common_structE __ia2_OutputHandler;
extern struct IA2_fnptr__ZTSFiP20jpeg_compress_structE __ia2_emptyOutputBuffer;
asm(
  ".set __ia2_emptyOutputBuffer, __real_emptyOutputBuffer\n"
);
extern struct IA2_fnptr__ZTSFvP18jpeg_common_structE __ia2_errorExit;
asm(
  ".set __ia2_errorExit, __real_errorExit\n"
);
extern struct IA2_fnptr__ZTSFiP22jpeg_decompress_structE __ia2_fill_input_buffer;
extern struct IA2_fnptr__ZTSFvP20jpeg_compress_structE __ia2_initDestination;
asm(
  ".set __ia2_initDestination, __real_initDestination\n"
);
extern struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE __ia2_init_source;
extern struct IA2_fnptr__ZTSFiP22jpeg_decompress_structiE __ia2_jpeg_resync_to_restart;
asm(
  ".set __ia2_jpeg_resync_to_restart, __real_jpeg_resync_to_restart\n"
);
extern struct IA2_fnptr__ZTSFvP22jpeg_decompress_structlE __ia2_skip_input_data;
extern struct IA2_fnptr__ZTSFvP20jpeg_compress_structE __ia2_termDestination;
asm(
  ".set __ia2_termDestination, __real_termDestination\n"
);
extern struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE __ia2_term_source;
extern struct IA2_fnptr__ZTSFiP22jpeg_decompress_structE __ia2_fill_input_buffer_cpp;
extern struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE __ia2_init_source_cpp;
extern struct IA2_fnptr__ZTSFvP18jpeg_common_structE __ia2_my_error_exit;
extern struct IA2_fnptr__ZTSFvP18jpeg_common_structE __ia2_progress_monitor;
extern struct IA2_fnptr__ZTSFvP22jpeg_decompress_structlE __ia2_skip_input_data_cpp;
extern struct IA2_fnptr__ZTSFvP22jpeg_decompress_structE __ia2_term_source_cpp;
asm("__libia2_abort:\n"
    "ud2");
#define IA2_DEFINE_WRAPPER_ErrorHandler \
asm(\
    /* Wrapper for ErrorHandler(int): */ \
    ".text\n" \
    ".global __ia2_ErrorHandler\n" \
    ".type __ia2_ErrorHandler, @function\n" \
    "__ia2_ErrorHandler:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call ErrorHandler\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_ErrorHandler, .-__ia2_ErrorHandler\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_OutputHandler \
asm(\
    /* Wrapper for OutputHandler(int): */ \
    ".text\n" \
    ".global __ia2_OutputHandler\n" \
    ".type __ia2_OutputHandler, @function\n" \
    "__ia2_OutputHandler:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call OutputHandler\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_OutputHandler, .-__ia2_OutputHandler\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_fill_input_buffer \
asm(\
    /* Wrapper for fill_input_buffer(int) -> int: */ \
    ".text\n" \
    ".global __ia2_fill_input_buffer\n" \
    ".type __ia2_fill_input_buffer, @function\n" \
    "__ia2_fill_input_buffer:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call fill_input_buffer\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_fill_input_buffer, .-__ia2_fill_input_buffer\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_init_source \
asm(\
    /* Wrapper for init_source(int): */ \
    ".text\n" \
    ".global __ia2_init_source\n" \
    ".type __ia2_init_source, @function\n" \
    "__ia2_init_source:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call init_source\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_init_source, .-__ia2_init_source\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_skip_input_data \
asm(\
    /* Wrapper for skip_input_data(int, int): */ \
    ".text\n" \
    ".global __ia2_skip_input_data\n" \
    ".type __ia2_skip_input_data, @function\n" \
    "__ia2_skip_input_data:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call skip_input_data\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_skip_input_data, .-__ia2_skip_input_data\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_term_source \
asm(\
    /* Wrapper for term_source(int): */ \
    ".text\n" \
    ".global __ia2_term_source\n" \
    ".type __ia2_term_source, @function\n" \
    "__ia2_term_source:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call term_source\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_term_source, .-__ia2_term_source\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_fill_input_buffer_cpp \
asm(\
    /* Wrapper for fill_input_buffer_cpp(int) -> int: */ \
    ".text\n" \
    ".local __ia2_fill_input_buffer_cpp\n" \
    ".type __ia2_fill_input_buffer_cpp, @function\n" \
    "__ia2_fill_input_buffer_cpp:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call fill_input_buffer_cpp\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_fill_input_buffer_cpp, .-__ia2_fill_input_buffer_cpp\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_init_source_cpp \
asm(\
    /* Wrapper for init_source_cpp(int): */ \
    ".text\n" \
    ".local __ia2_init_source_cpp\n" \
    ".type __ia2_init_source_cpp, @function\n" \
    "__ia2_init_source_cpp:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call init_source_cpp\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_init_source_cpp, .-__ia2_init_source_cpp\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_my_error_exit \
asm(\
    /* Wrapper for my_error_exit(int): */ \
    ".text\n" \
    ".local __ia2_my_error_exit\n" \
    ".type __ia2_my_error_exit, @function\n" \
    "__ia2_my_error_exit:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call my_error_exit\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_my_error_exit, .-__ia2_my_error_exit\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_progress_monitor \
asm(\
    /* Wrapper for progress_monitor(int): */ \
    ".text\n" \
    ".local __ia2_progress_monitor\n" \
    ".type __ia2_progress_monitor, @function\n" \
    "__ia2_progress_monitor:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call progress_monitor\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_progress_monitor, .-__ia2_progress_monitor\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_skip_input_data_cpp \
asm(\
    /* Wrapper for skip_input_data_cpp(int, int): */ \
    ".text\n" \
    ".local __ia2_skip_input_data_cpp\n" \
    ".type __ia2_skip_input_data_cpp, @function\n" \
    "__ia2_skip_input_data_cpp:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call skip_input_data_cpp\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_skip_input_data_cpp, .-__ia2_skip_input_data_cpp\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_term_source_cpp \
asm(\
    /* Wrapper for term_source_cpp(int): */ \
    ".text\n" \
    ".local __ia2_term_source_cpp\n" \
    ".type __ia2_term_source_cpp, @function\n" \
    "__ia2_term_source_cpp:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call term_source_cpp\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_term_source_cpp, .-__ia2_term_source_cpp\n" \
    ".previous\n" \
);

#endif
