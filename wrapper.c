#include <ia2.h>
#include <scrub_registers.h>
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
