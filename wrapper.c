#include <ia2.h>
#include <scrub_registers.h>
asm(
    /* Wrapper for jpeg12_crop_scanline(int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_crop_scanline\n"
    ".type __wrap_jpeg12_crop_scanline, @function\n"
    "__wrap_jpeg12_crop_scanline:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg12_crop_scanline\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg12_crop_scanline, .-__wrap_jpeg12_crop_scanline\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_read_raw_data(int, int, int) -> int: */
    ".text\n"
    ".global __wrap_jpeg12_read_raw_data\n"
    ".type __wrap_jpeg12_read_raw_data, @function\n"
    "__wrap_jpeg12_read_raw_data:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg12_read_raw_data\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg12_read_raw_data, .-__wrap_jpeg12_read_raw_data\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_read_scanlines(int, int, int) -> int: */
    ".text\n"
    ".global __wrap_jpeg12_read_scanlines\n"
    ".type __wrap_jpeg12_read_scanlines, @function\n"
    "__wrap_jpeg12_read_scanlines:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg12_read_scanlines\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg12_read_scanlines, .-__wrap_jpeg12_read_scanlines\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_skip_scanlines(int, int) -> int: */
    ".text\n"
    ".global __wrap_jpeg12_skip_scanlines\n"
    ".type __wrap_jpeg12_skip_scanlines, @function\n"
    "__wrap_jpeg12_skip_scanlines:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg12_skip_scanlines\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg12_skip_scanlines, .-__wrap_jpeg12_skip_scanlines\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_write_raw_data(int, int, int) -> int: */
    ".text\n"
    ".global __wrap_jpeg12_write_raw_data\n"
    ".type __wrap_jpeg12_write_raw_data, @function\n"
    "__wrap_jpeg12_write_raw_data:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg12_write_raw_data\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg12_write_raw_data, .-__wrap_jpeg12_write_raw_data\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_write_scanlines(int, int, int) -> int: */
    ".text\n"
    ".global __wrap_jpeg12_write_scanlines\n"
    ".type __wrap_jpeg12_write_scanlines, @function\n"
    "__wrap_jpeg12_write_scanlines:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg12_write_scanlines\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg12_write_scanlines, .-__wrap_jpeg12_write_scanlines\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg16_read_scanlines(int, int, int) -> int: */
    ".text\n"
    ".global __wrap_jpeg16_read_scanlines\n"
    ".type __wrap_jpeg16_read_scanlines, @function\n"
    "__wrap_jpeg16_read_scanlines:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg16_read_scanlines\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg16_read_scanlines, .-__wrap_jpeg16_read_scanlines\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg16_write_scanlines(int, int, int) -> int: */
    ".text\n"
    ".global __wrap_jpeg16_write_scanlines\n"
    ".type __wrap_jpeg16_write_scanlines, @function\n"
    "__wrap_jpeg16_write_scanlines:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg16_write_scanlines\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg16_write_scanlines, .-__wrap_jpeg16_write_scanlines\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_CreateCompress(int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_CreateCompress\n"
    ".type __wrap_jpeg_CreateCompress, @function\n"
    "__wrap_jpeg_CreateCompress:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_CreateCompress\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_CreateCompress, .-__wrap_jpeg_CreateCompress\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_CreateDecompress(int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_CreateDecompress\n"
    ".type __wrap_jpeg_CreateDecompress, @function\n"
    "__wrap_jpeg_CreateDecompress:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_CreateDecompress\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_CreateDecompress, .-__wrap_jpeg_CreateDecompress\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_abort(int): */
    ".text\n"
    ".global __wrap_jpeg_abort\n"
    ".type __wrap_jpeg_abort, @function\n"
    "__wrap_jpeg_abort:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_abort\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_abort, .-__wrap_jpeg_abort\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_abort_compress(int): */
    ".text\n"
    ".global __wrap_jpeg_abort_compress\n"
    ".type __wrap_jpeg_abort_compress, @function\n"
    "__wrap_jpeg_abort_compress:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_abort_compress\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_abort_compress, .-__wrap_jpeg_abort_compress\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_abort_decompress(int): */
    ".text\n"
    ".global __wrap_jpeg_abort_decompress\n"
    ".type __wrap_jpeg_abort_decompress, @function\n"
    "__wrap_jpeg_abort_decompress:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_abort_decompress\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_abort_decompress, .-__wrap_jpeg_abort_decompress\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_add_quant_table(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_add_quant_table\n"
    ".type __wrap_jpeg_add_quant_table, @function\n"
    "__wrap_jpeg_add_quant_table:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_add_quant_table\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_add_quant_table, .-__wrap_jpeg_add_quant_table\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_alloc_huff_table(int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_alloc_huff_table\n"
    ".type __wrap_jpeg_alloc_huff_table, @function\n"
    "__wrap_jpeg_alloc_huff_table:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_alloc_huff_table\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_alloc_huff_table, .-__wrap_jpeg_alloc_huff_table\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_alloc_quant_table(int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_alloc_quant_table\n"
    ".type __wrap_jpeg_alloc_quant_table, @function\n"
    "__wrap_jpeg_alloc_quant_table:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_alloc_quant_table\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_alloc_quant_table, .-__wrap_jpeg_alloc_quant_table\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_calc_output_dimensions(int): */
    ".text\n"
    ".global __wrap_jpeg_calc_output_dimensions\n"
    ".type __wrap_jpeg_calc_output_dimensions, @function\n"
    "__wrap_jpeg_calc_output_dimensions:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_calc_output_dimensions\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_calc_output_dimensions, .-__wrap_jpeg_calc_output_dimensions\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_consume_input(int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_consume_input\n"
    ".type __wrap_jpeg_consume_input, @function\n"
    "__wrap_jpeg_consume_input:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_consume_input\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_consume_input, .-__wrap_jpeg_consume_input\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_copy_critical_parameters(int, int): */
    ".text\n"
    ".global __wrap_jpeg_copy_critical_parameters\n"
    ".type __wrap_jpeg_copy_critical_parameters, @function\n"
    "__wrap_jpeg_copy_critical_parameters:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_copy_critical_parameters\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_copy_critical_parameters, .-__wrap_jpeg_copy_critical_parameters\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_crop_scanline(int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_crop_scanline\n"
    ".type __wrap_jpeg_crop_scanline, @function\n"
    "__wrap_jpeg_crop_scanline:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_crop_scanline\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_crop_scanline, .-__wrap_jpeg_crop_scanline\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_default_colorspace(int): */
    ".text\n"
    ".global __wrap_jpeg_default_colorspace\n"
    ".type __wrap_jpeg_default_colorspace, @function\n"
    "__wrap_jpeg_default_colorspace:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_default_colorspace\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_default_colorspace, .-__wrap_jpeg_default_colorspace\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_destroy(int): */
    ".text\n"
    ".global __wrap_jpeg_destroy\n"
    ".type __wrap_jpeg_destroy, @function\n"
    "__wrap_jpeg_destroy:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_destroy\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_destroy, .-__wrap_jpeg_destroy\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_destroy_compress(int): */
    ".text\n"
    ".global __wrap_jpeg_destroy_compress\n"
    ".type __wrap_jpeg_destroy_compress, @function\n"
    "__wrap_jpeg_destroy_compress:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_destroy_compress\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_destroy_compress, .-__wrap_jpeg_destroy_compress\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_destroy_decompress(int): */
    ".text\n"
    ".global __wrap_jpeg_destroy_decompress\n"
    ".type __wrap_jpeg_destroy_decompress, @function\n"
    "__wrap_jpeg_destroy_decompress:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_destroy_decompress\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_destroy_decompress, .-__wrap_jpeg_destroy_decompress\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_enable_lossless(int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_enable_lossless\n"
    ".type __wrap_jpeg_enable_lossless, @function\n"
    "__wrap_jpeg_enable_lossless:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_enable_lossless\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_enable_lossless, .-__wrap_jpeg_enable_lossless\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_finish_compress(int): */
    ".text\n"
    ".global __wrap_jpeg_finish_compress\n"
    ".type __wrap_jpeg_finish_compress, @function\n"
    "__wrap_jpeg_finish_compress:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_finish_compress\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_finish_compress, .-__wrap_jpeg_finish_compress\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_finish_decompress(int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_finish_decompress\n"
    ".type __wrap_jpeg_finish_decompress, @function\n"
    "__wrap_jpeg_finish_decompress:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_finish_decompress\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_finish_decompress, .-__wrap_jpeg_finish_decompress\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_finish_output(int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_finish_output\n"
    ".type __wrap_jpeg_finish_output, @function\n"
    "__wrap_jpeg_finish_output:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_finish_output\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_finish_output, .-__wrap_jpeg_finish_output\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_has_multiple_scans(int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_has_multiple_scans\n"
    ".type __wrap_jpeg_has_multiple_scans, @function\n"
    "__wrap_jpeg_has_multiple_scans:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_has_multiple_scans\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_has_multiple_scans, .-__wrap_jpeg_has_multiple_scans\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_input_complete(int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_input_complete\n"
    ".type __wrap_jpeg_input_complete, @function\n"
    "__wrap_jpeg_input_complete:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_input_complete\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_input_complete, .-__wrap_jpeg_input_complete\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_mem_dest(int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_mem_dest\n"
    ".type __wrap_jpeg_mem_dest, @function\n"
    "__wrap_jpeg_mem_dest:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_mem_dest\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_mem_dest, .-__wrap_jpeg_mem_dest\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_mem_src(int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_mem_src\n"
    ".type __wrap_jpeg_mem_src, @function\n"
    "__wrap_jpeg_mem_src:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_mem_src\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_mem_src, .-__wrap_jpeg_mem_src\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_new_colormap(int): */
    ".text\n"
    ".global __wrap_jpeg_new_colormap\n"
    ".type __wrap_jpeg_new_colormap, @function\n"
    "__wrap_jpeg_new_colormap:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_new_colormap\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_new_colormap, .-__wrap_jpeg_new_colormap\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_quality_scaling(int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_quality_scaling\n"
    ".type __wrap_jpeg_quality_scaling, @function\n"
    "__wrap_jpeg_quality_scaling:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_quality_scaling\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_quality_scaling, .-__wrap_jpeg_quality_scaling\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_read_coefficients(int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_read_coefficients\n"
    ".type __wrap_jpeg_read_coefficients, @function\n"
    "__wrap_jpeg_read_coefficients:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_read_coefficients\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_read_coefficients, .-__wrap_jpeg_read_coefficients\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_read_header(int, int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_read_header\n"
    ".type __wrap_jpeg_read_header, @function\n"
    "__wrap_jpeg_read_header:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_read_header\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_read_header, .-__wrap_jpeg_read_header\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_read_icc_profile(int, int, int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_read_icc_profile\n"
    ".type __wrap_jpeg_read_icc_profile, @function\n"
    "__wrap_jpeg_read_icc_profile:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_read_icc_profile\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_read_icc_profile, .-__wrap_jpeg_read_icc_profile\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_read_raw_data(int, int, int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_read_raw_data\n"
    ".type __wrap_jpeg_read_raw_data, @function\n"
    "__wrap_jpeg_read_raw_data:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_read_raw_data\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_read_raw_data, .-__wrap_jpeg_read_raw_data\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_read_scanlines(int, int, int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_read_scanlines\n"
    ".type __wrap_jpeg_read_scanlines, @function\n"
    "__wrap_jpeg_read_scanlines:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_read_scanlines\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_read_scanlines, .-__wrap_jpeg_read_scanlines\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_resync_to_restart(int, int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_resync_to_restart\n"
    ".type __wrap_jpeg_resync_to_restart, @function\n"
    "__wrap_jpeg_resync_to_restart:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_resync_to_restart\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_resync_to_restart, .-__wrap_jpeg_resync_to_restart\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_save_markers(int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_save_markers\n"
    ".type __wrap_jpeg_save_markers, @function\n"
    "__wrap_jpeg_save_markers:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_save_markers\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_save_markers, .-__wrap_jpeg_save_markers\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_set_colorspace(int, int): */
    ".text\n"
    ".global __wrap_jpeg_set_colorspace\n"
    ".type __wrap_jpeg_set_colorspace, @function\n"
    "__wrap_jpeg_set_colorspace:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_set_colorspace\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_set_colorspace, .-__wrap_jpeg_set_colorspace\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_set_defaults(int): */
    ".text\n"
    ".global __wrap_jpeg_set_defaults\n"
    ".type __wrap_jpeg_set_defaults, @function\n"
    "__wrap_jpeg_set_defaults:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_set_defaults\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_set_defaults, .-__wrap_jpeg_set_defaults\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_set_linear_quality(int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_set_linear_quality\n"
    ".type __wrap_jpeg_set_linear_quality, @function\n"
    "__wrap_jpeg_set_linear_quality:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_set_linear_quality\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_set_linear_quality, .-__wrap_jpeg_set_linear_quality\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_set_marker_processor(int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_set_marker_processor\n"
    ".type __wrap_jpeg_set_marker_processor, @function\n"
    "__wrap_jpeg_set_marker_processor:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_set_marker_processor\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_set_marker_processor, .-__wrap_jpeg_set_marker_processor\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_set_quality(int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_set_quality\n"
    ".type __wrap_jpeg_set_quality, @function\n"
    "__wrap_jpeg_set_quality:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_set_quality\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_set_quality, .-__wrap_jpeg_set_quality\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_simple_progression(int): */
    ".text\n"
    ".global __wrap_jpeg_simple_progression\n"
    ".type __wrap_jpeg_simple_progression, @function\n"
    "__wrap_jpeg_simple_progression:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_simple_progression\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_simple_progression, .-__wrap_jpeg_simple_progression\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_skip_scanlines(int, int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_skip_scanlines\n"
    ".type __wrap_jpeg_skip_scanlines, @function\n"
    "__wrap_jpeg_skip_scanlines:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_skip_scanlines\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_skip_scanlines, .-__wrap_jpeg_skip_scanlines\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_start_compress(int, int): */
    ".text\n"
    ".global __wrap_jpeg_start_compress\n"
    ".type __wrap_jpeg_start_compress, @function\n"
    "__wrap_jpeg_start_compress:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_start_compress\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_start_compress, .-__wrap_jpeg_start_compress\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_start_decompress(int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_start_decompress\n"
    ".type __wrap_jpeg_start_decompress, @function\n"
    "__wrap_jpeg_start_decompress:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_start_decompress\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_start_decompress, .-__wrap_jpeg_start_decompress\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_start_output(int, int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_start_output\n"
    ".type __wrap_jpeg_start_output, @function\n"
    "__wrap_jpeg_start_output:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_start_output\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_start_output, .-__wrap_jpeg_start_output\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_std_error(int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_std_error\n"
    ".type __wrap_jpeg_std_error, @function\n"
    "__wrap_jpeg_std_error:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_std_error\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_std_error, .-__wrap_jpeg_std_error\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_stdio_dest(int, int): */
    ".text\n"
    ".global __wrap_jpeg_stdio_dest\n"
    ".type __wrap_jpeg_stdio_dest, @function\n"
    "__wrap_jpeg_stdio_dest:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_stdio_dest\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_stdio_dest, .-__wrap_jpeg_stdio_dest\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_stdio_src(int, int): */
    ".text\n"
    ".global __wrap_jpeg_stdio_src\n"
    ".type __wrap_jpeg_stdio_src, @function\n"
    "__wrap_jpeg_stdio_src:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_stdio_src\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_stdio_src, .-__wrap_jpeg_stdio_src\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_suppress_tables(int, int): */
    ".text\n"
    ".global __wrap_jpeg_suppress_tables\n"
    ".type __wrap_jpeg_suppress_tables, @function\n"
    "__wrap_jpeg_suppress_tables:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_suppress_tables\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_suppress_tables, .-__wrap_jpeg_suppress_tables\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_write_coefficients(int, int): */
    ".text\n"
    ".global __wrap_jpeg_write_coefficients\n"
    ".type __wrap_jpeg_write_coefficients, @function\n"
    "__wrap_jpeg_write_coefficients:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_write_coefficients\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_write_coefficients, .-__wrap_jpeg_write_coefficients\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_write_icc_profile(int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_write_icc_profile\n"
    ".type __wrap_jpeg_write_icc_profile, @function\n"
    "__wrap_jpeg_write_icc_profile:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_write_icc_profile\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_write_icc_profile, .-__wrap_jpeg_write_icc_profile\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_write_m_byte(int, int): */
    ".text\n"
    ".global __wrap_jpeg_write_m_byte\n"
    ".type __wrap_jpeg_write_m_byte, @function\n"
    "__wrap_jpeg_write_m_byte:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_write_m_byte\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_write_m_byte, .-__wrap_jpeg_write_m_byte\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_write_m_header(int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_write_m_header\n"
    ".type __wrap_jpeg_write_m_header, @function\n"
    "__wrap_jpeg_write_m_header:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_write_m_header\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_write_m_header, .-__wrap_jpeg_write_m_header\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_write_marker(int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_write_marker\n"
    ".type __wrap_jpeg_write_marker, @function\n"
    "__wrap_jpeg_write_marker:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_write_marker\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_write_marker, .-__wrap_jpeg_write_marker\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_write_raw_data(int, int, int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_write_raw_data\n"
    ".type __wrap_jpeg_write_raw_data, @function\n"
    "__wrap_jpeg_write_raw_data:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_write_raw_data\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_write_raw_data, .-__wrap_jpeg_write_raw_data\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_write_scanlines(int, int, int) -> int: */
    ".text\n"
    ".global __wrap_jpeg_write_scanlines\n"
    ".type __wrap_jpeg_write_scanlines, @function\n"
    "__wrap_jpeg_write_scanlines:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_write_scanlines\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_write_scanlines, .-__wrap_jpeg_write_scanlines\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_write_tables(int): */
    ".text\n"
    ".global __wrap_jpeg_write_tables\n"
    ".type __wrap_jpeg_write_tables, @function\n"
    "__wrap_jpeg_write_tables:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call jpeg_write_tables\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_jpeg_write_tables, .-__wrap_jpeg_write_tables\n"
    ".previous\n"
);
asm(
    /* Wrapper for ia2_compartment_destructor_1(): */
    ".text\n"
    ".global __wrap_ia2_compartment_destructor_1\n"
    ".type __wrap_ia2_compartment_destructor_1, @function\n"
    "__wrap_ia2_compartment_destructor_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffffc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call ia2_compartment_destructor_1\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_ia2_compartment_destructor_1, .-__wrap_ia2_compartment_destructor_1\n"
    ".previous\n"
);
