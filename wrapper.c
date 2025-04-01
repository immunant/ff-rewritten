#include <ia2.h>
#include <scrub_registers.h>
asm(
    /* Wrapper for indirect call(int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFN2JS6HandleIP8JSObjectEEP9JSContextE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFN2JS6HandleIP8JSObjectEEP9JSContextE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFN2JS6HandleIP8JSObjectEEP9JSContextE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFN2JS6HandleIP8JSObjectEEP9JSContextE_pkey_1, .-__ia2_indirect_callgate__ZTSPFN2JS6HandleIP8JSObjectEEP9JSContextE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFP20jvirt_barray_controlP18jpeg_common_structiijjjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFP20jvirt_barray_controlP18jpeg_common_structiijjjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFP20jvirt_barray_controlP18jpeg_common_structiijjjE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 56(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFP20jvirt_barray_controlP18jpeg_common_structiijjjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFP20jvirt_barray_controlP18jpeg_common_structiijjjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFP20jvirt_sarray_controlP18jpeg_common_structiijjjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFP20jvirt_sarray_controlP18jpeg_common_structiijjjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFP20jvirt_sarray_controlP18jpeg_common_structiijjjE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 56(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFP20jvirt_sarray_controlP18jpeg_common_structiijjjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFP20jvirt_sarray_controlP18jpeg_common_structiijjjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFP8JSObjectP9JSContextE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFP8JSObjectP9JSContextE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFP8JSObjectP9JSContextE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFP8JSObjectP9JSContextE_pkey_1, .-__ia2_indirect_callgate__ZTSPFP8JSObjectP9JSContextE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFPPA64_sP18jpeg_common_structP20jvirt_barray_controljjiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFPPA64_sP18jpeg_common_structP20jvirt_barray_controljjiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFPPA64_sP18jpeg_common_structP20jvirt_barray_controljjiE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFPPA64_sP18jpeg_common_structP20jvirt_barray_controljjiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFPPA64_sP18jpeg_common_structP20jvirt_barray_controljjiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFPPhP18jpeg_common_structP20jvirt_sarray_controljjiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFPPhP18jpeg_common_structP20jvirt_sarray_controljjiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFPPhP18jpeg_common_structP20jvirt_sarray_controljjiE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFPPhP18jpeg_common_structP20jvirt_sarray_controljjiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFPPhP18jpeg_common_structP20jvirt_sarray_controljjiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFPPhP18jpeg_common_structijjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFPPhP18jpeg_common_structijjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFPPhP18jpeg_common_structijjE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFPPhP18jpeg_common_structijjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFPPhP18jpeg_common_structijjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFPvP18jpeg_common_structimE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFPvP18jpeg_common_structimE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFPvP18jpeg_common_structimE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFPvP18jpeg_common_structimE_pkey_1, .-__ia2_indirect_callgate__ZTSPFPvP18jpeg_common_structimE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFbN2JS6HandleINS_5ValueEEEE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFbN2JS6HandleINS_5ValueEEEE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFbN2JS6HandleINS_5ValueEEEE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFbN2JS6HandleINS_5ValueEEEE_pkey_1, .-__ia2_indirect_callgate__ZTSPFbN2JS6HandleINS_5ValueEEEE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFbP9JSContextRKN2JS8CallArgsEE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFbP9JSContextRKN2JS8CallArgsEE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFbP9JSContextRKN2JS8CallArgsEE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFbP9JSContextRKN2JS8CallArgsEE_pkey_1, .-__ia2_indirect_callgate__ZTSPFbP9JSContextRKN2JS8CallArgsEE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPA64_sE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPA64_sE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPA64_sE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPA64_sE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPA64_sE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPPhE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPPhE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPPhE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPPhE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPPhE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPPsE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPPsE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPPsE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPPsE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPPsE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPPtE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPPtE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPPtE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPPtE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP20jpeg_compress_structPPPtE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPA64_sE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPA64_sE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPA64_sE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPA64_sE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPA64_sE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPPhE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPPhE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPPhE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPPhE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPPhE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPPsE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPPsE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPPsE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPPsE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPPsE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPPtE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPPtE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPPtE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPPtE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structPPPtE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structiE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP22jpeg_decompress_structiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiPKsPKiiiPtPmE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiPKsPKiiiPtPmE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiPKsPKiiiPtPmE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 48(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFiPKsPKiiiPtPmE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiPKsPKiiiPtPmE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFjP20jpeg_compress_structPPPijjjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFjP20jpeg_compress_structPPPijjjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFjP20jpeg_compress_structPPPijjjE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFjP20jpeg_compress_structPPPijjjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFjP20jpeg_compress_structPPPijjjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFjP22jpeg_decompress_structPPPijjjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFjP22jpeg_decompress_structPPPijjjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFjP22jpeg_decompress_structPPPijjjE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFjP22jpeg_decompress_structPPPijjjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFjP22jpeg_decompress_structPPPijjjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP18jpeg_common_structE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP18jpeg_common_structE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP18jpeg_common_structE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP18jpeg_common_structE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP18jpeg_common_structE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP18jpeg_common_structP20backing_store_structE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP18jpeg_common_structP20backing_store_structE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP18jpeg_common_structP20backing_store_structE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP18jpeg_common_structP20backing_store_structE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP18jpeg_common_structP20backing_store_structE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP18jpeg_common_structP20backing_store_structPvllE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP18jpeg_common_structP20backing_store_structPvllE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP18jpeg_common_structP20backing_store_structPvllE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP18jpeg_common_structP20backing_store_structPvllE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP18jpeg_common_structP20backing_store_structPvllE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP18jpeg_common_structPcE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP18jpeg_common_structPcE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP18jpeg_common_structPcE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP18jpeg_common_structPcE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP18jpeg_common_structPcE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP18jpeg_common_structiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP18jpeg_common_structiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP18jpeg_common_structiE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP18jpeg_common_structiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP18jpeg_common_structiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_struct10J_BUF_MODEE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_struct10J_BUF_MODEE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_struct10J_BUF_MODEE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_struct10J_BUF_MODEE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_struct10J_BUF_MODEE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPhPA64_sjjjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPhPA64_sjjjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPhPA64_sjjjE_pkey_1:\n"
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
    /* Copy stack arguments from the caller's stack to the compartment */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r12\n"
    "movq %fs:(%r12), %rax\n"
    "pushq 64(%rax)\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 56(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPhPA64_sjjjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPhPA64_sjjjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPhS4_E_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPhS4_E_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPhS4_E_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPhS4_E_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPhS4_E_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPsPA64_sjjjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPsPA64_sjjjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPsPA64_sjjjE_pkey_1:\n"
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
    /* Copy stack arguments from the caller's stack to the compartment */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r12\n"
    "movq %fs:(%r12), %rax\n"
    "pushq 64(%rax)\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 56(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPsPA64_sjjjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPsPA64_sjjjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPsS4_E_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPsS4_E_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPsS4_E_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPsS4_E_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPsS4_E_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPtS4_E_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPtS4_E_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPtS4_E_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPtS4_E_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structP19jpeg_component_infoPPtS4_E_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPPhjS3_jE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPPhjS3_jE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPPhjS3_jE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPPhjS3_jE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPPhjS3_jE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPPsjS3_jE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPPsjS3_jE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPPsjS3_jE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPPsjS3_jE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPPsjS3_jE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPPtjS3_jE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPPtjS3_jE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPPtjS3_jE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPPtjS3_jE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPPtjS3_jE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPhPS2_jiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPhPS2_jiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPhPS2_jiE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPhPS2_jiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPhPS2_jiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPhPjjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPhPjjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPhPjjE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPhPjjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPhPjjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPhPjjPS2_S3_jE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPhPjjPS2_S3_jE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPhPjjPS2_S3_jE_pkey_1:\n"
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
    /* Copy stack arguments from the caller's stack to the compartment */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r12\n"
    "movq %fs:(%r12), %rax\n"
    "pushq 64(%rax)\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 48(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPhPjjPS2_S3_jE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPhPjjPS2_S3_jE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPsPS2_jiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPsPS2_jiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPsPS2_jiE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPsPS2_jiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPsPS2_jiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPsPjjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPsPjjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPsPjjE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPsPjjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPsPjjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPsPjjPS2_S3_jE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPsPjjPS2_S3_jE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPsPjjPS2_S3_jE_pkey_1:\n"
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
    /* Copy stack arguments from the caller's stack to the compartment */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r12\n"
    "movq %fs:(%r12), %rax\n"
    "pushq 64(%rax)\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 48(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPsPjjPS2_S3_jE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPsPjjPS2_S3_jE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPtPS2_jiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPtPS2_jiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPtPS2_jiE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPtPS2_jiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPtPS2_jiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPtPjjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPtPjjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPtPjjE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPtPjjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPtPjjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPtPjjPS2_S3_jE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPtPjjPS2_S3_jE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPtPjjPS2_S3_jE_pkey_1:\n"
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
    /* Copy stack arguments from the caller's stack to the compartment */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r12\n"
    "movq %fs:(%r12), %rax\n"
    "pushq 64(%rax)\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 48(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPtPjjPS2_S3_jE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPPtPjjPS2_S3_jE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPhS1_jE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPhS1_jE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPhS1_jE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPhS1_jE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPhS1_jE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPsS1_jE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPsS1_jE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPsS1_jE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPsS1_jE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPsS1_jE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPtS1_jE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPtS1_jE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPtS1_jE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPtS1_jE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structPtS1_jE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiPhS1_PijE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiPhS1_PijE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiPhS1_PijE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 56(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiPhS1_PijE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiPhS1_PijE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiPsS1_PijE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiPsS1_PijE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiPsS1_PijE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 56(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiPsS1_PijE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiPsS1_PijE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiPtS1_PijE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiPtS1_PijE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiPtS1_PijE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 56(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiPtS1_PijE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structiPtS1_PijE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structijE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structijE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structijE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structijE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP20jpeg_compress_structijE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_struct10J_BUF_MODEE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_struct10J_BUF_MODEE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_struct10J_BUF_MODEE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_struct10J_BUF_MODEE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_struct10J_BUF_MODEE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPPhPS4_E_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPPhPS4_E_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPPhPS4_E_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPPhPS4_E_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPPhPS4_E_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPPsPS4_E_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPPsPS4_E_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPPsPS4_E_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPPsPS4_E_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPPsPS4_E_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPPtPS4_E_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPPtPS4_E_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPPtPS4_E_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPPtPS4_E_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPPtPS4_E_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPsPPhjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPsPPhjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPsPPhjE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPsPPhjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPsPPhjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPsPS3_jE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPsPS3_jE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPsPS3_jE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPsPS3_jE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structP19jpeg_component_infoPsPS3_jE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPhPjjS2_S4_jE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPhPjjS2_S4_jE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPhPjjS2_S4_jE_pkey_1:\n"
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
    /* Copy stack arguments from the caller's stack to the compartment */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r12\n"
    "movq %fs:(%r12), %rax\n"
    "pushq 64(%rax)\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 48(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPhPjjS2_S4_jE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPhPjjS2_S4_jE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPhjS2_E_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPhjS2_E_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPhjS2_E_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPhjS2_E_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPhjS2_E_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPhjS2_iE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPhjS2_iE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPhjS2_iE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPhjS2_iE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPhjS2_iE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPsPjjS2_S4_jE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPsPjjS2_S4_jE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPsPjjS2_S4_jE_pkey_1:\n"
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
    /* Copy stack arguments from the caller's stack to the compartment */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r12\n"
    "movq %fs:(%r12), %rax\n"
    "pushq 64(%rax)\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 48(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPsPjjS2_S4_jE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPsPjjS2_S4_jE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPsjS2_E_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPsjS2_E_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPsjS2_E_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPsjS2_E_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPsjS2_E_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPsjS2_iE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPsjS2_iE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPsjS2_iE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPsjS2_iE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPsjS2_iE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPtPjjS2_S4_jE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPtPjjS2_S4_jE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPtPjjS2_S4_jE_pkey_1:\n"
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
    /* Copy stack arguments from the caller's stack to the compartment */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r12\n"
    "movq %fs:(%r12), %rax\n"
    "pushq 64(%rax)\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 48(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPtPjjS2_S4_jE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPtPjjS2_S4_jE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPtjS2_iE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPtjS2_iE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPtjS2_iE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPtjS2_iE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPPtjS2_iE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPhPjjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPhPjjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPhPjjE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPhPjjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPhPjjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPhS2_iE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPhS2_iE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPhS2_iE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPhS2_iE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPhS2_iE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPsPjjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPsPjjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPsPjjE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPsPjjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPsPjjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPsS2_iE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPsS2_iE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPsS2_iE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPsS2_iE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPsS2_iE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPtPjjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPtPjjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPtPjjE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPtPjjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPPtPjjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPiPhjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPiPhjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPiPhjE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPiPhjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPiPhjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPiPsjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPiPsjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPiPsjE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPiPsjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPiPsjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPiPtjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPiPtjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPiPtjE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPiPtjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structPiPtjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structiE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structiPiS1_S1_jE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structiPiS1_S1_jE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structiPiS1_S1_jE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 56(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structiPiS1_S1_jE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structiPiS1_S1_jE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structlE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structlE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structlE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structlE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP22jpeg_decompress_structlE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPKsPKiiiPtPmE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvPKsPKiiiPtPmE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPKsPKiiiPtPmE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 48(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvPKsPKiiiPtPmE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvPKsPKiiiPtPmE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPPhjPfE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvPPhjPfE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPPhjPfE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvPPhjPfE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvPPhjPfE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPPhjPsE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvPPhjPsE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPPhjPsE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvPPhjPsE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvPPhjPsE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPPsjPfE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvPPsjPfE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPPsjPfE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvPPsjPfE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvPPsjPfE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPPsjPlE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvPPsjPlE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPPsjPlE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvPPsjPlE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvPPsjPlE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPfE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvPfE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPfE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvPfE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvPfE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPlE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvPlE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPlE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvPlE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvPlE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPsE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvPsE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPsE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvPsE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvPsE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPsPfS0_E_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvPsPfS0_E_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPsPfS0_E_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvPsPfS0_E_pkey_1, .-__ia2_indirect_callgate__ZTSPFvPsPfS0_E_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPsPlS0_E_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvPsPlS0_E_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPsPlS0_E_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvPsPlS0_E_pkey_1, .-__ia2_indirect_callgate__ZTSPFvPsPlS0_E_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPsS_S_E_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvPsS_S_E_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPsS_S_E_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvPsS_S_E_pkey_1, .-__ia2_indirect_callgate__ZTSPFvPsS_S_E_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvRN7mozilla24ProfileBufferEntryReaderERNS_12baseprofiler20SpliceableJSONWriterEE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvRN7mozilla24ProfileBufferEntryReaderERNS_12baseprofiler20SpliceableJSONWriterEE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvRN7mozilla24ProfileBufferEntryReaderERNS_12baseprofiler20SpliceableJSONWriterEE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvRN7mozilla24ProfileBufferEntryReaderERNS_12baseprofiler20SpliceableJSONWriterEE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvRN7mozilla24ProfileBufferEntryReaderERNS_12baseprofiler20SpliceableJSONWriterEE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvjPPPhjS0_E_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvjPPPhjS0_E_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvjPPPhjS0_E_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvjPPPhjS0_E_pkey_1, .-__ia2_indirect_callgate__ZTSPFvjPPPhjS0_E_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvjPPPhjS0_iE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvjPPPhjS0_iE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvjPPPhjS0_iE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvjPPPhjS0_iE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvjPPPhjS0_iE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvjPPhPS0_jiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvjPPhPS0_jiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvjPPhPS0_jiE_pkey_1:\n"
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
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
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
    "call *%r12\n"
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
    ".size __ia2_indirect_callgate__ZTSPFvjPPhPS0_jiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvjPPhPS0_jiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12copy_sample_rows(int, int, int, int, int, int): */
    ".text\n"
    ".global __wrap_j12copy_sample_rows\n"
    ".type __wrap_j12copy_sample_rows, @function\n"
    "__wrap_j12copy_sample_rows:\n"
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
    "call j12copy_sample_rows\n"
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
    ".size __wrap_j12copy_sample_rows, .-__wrap_j12copy_sample_rows\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_1pass_quantizer(int): */
    ".text\n"
    ".global __wrap_j12init_1pass_quantizer\n"
    ".type __wrap_j12init_1pass_quantizer, @function\n"
    "__wrap_j12init_1pass_quantizer:\n"
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
    "call j12init_1pass_quantizer\n"
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
    ".size __wrap_j12init_1pass_quantizer, .-__wrap_j12init_1pass_quantizer\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_2pass_quantizer(int): */
    ".text\n"
    ".global __wrap_j12init_2pass_quantizer\n"
    ".type __wrap_j12init_2pass_quantizer, @function\n"
    "__wrap_j12init_2pass_quantizer:\n"
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
    "call j12init_2pass_quantizer\n"
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
    ".size __wrap_j12init_2pass_quantizer, .-__wrap_j12init_2pass_quantizer\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_c_coef_controller(int, int): */
    ".text\n"
    ".global __wrap_j12init_c_coef_controller\n"
    ".type __wrap_j12init_c_coef_controller, @function\n"
    "__wrap_j12init_c_coef_controller:\n"
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
    "call j12init_c_coef_controller\n"
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
    ".size __wrap_j12init_c_coef_controller, .-__wrap_j12init_c_coef_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_c_diff_controller(int, int): */
    ".text\n"
    ".global __wrap_j12init_c_diff_controller\n"
    ".type __wrap_j12init_c_diff_controller, @function\n"
    "__wrap_j12init_c_diff_controller:\n"
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
    "call j12init_c_diff_controller\n"
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
    ".size __wrap_j12init_c_diff_controller, .-__wrap_j12init_c_diff_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_c_main_controller(int, int): */
    ".text\n"
    ".global __wrap_j12init_c_main_controller\n"
    ".type __wrap_j12init_c_main_controller, @function\n"
    "__wrap_j12init_c_main_controller:\n"
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
    "call j12init_c_main_controller\n"
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
    ".size __wrap_j12init_c_main_controller, .-__wrap_j12init_c_main_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_c_prep_controller(int, int): */
    ".text\n"
    ".global __wrap_j12init_c_prep_controller\n"
    ".type __wrap_j12init_c_prep_controller, @function\n"
    "__wrap_j12init_c_prep_controller:\n"
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
    "call j12init_c_prep_controller\n"
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
    ".size __wrap_j12init_c_prep_controller, .-__wrap_j12init_c_prep_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_color_converter(int): */
    ".text\n"
    ".global __wrap_j12init_color_converter\n"
    ".type __wrap_j12init_color_converter, @function\n"
    "__wrap_j12init_color_converter:\n"
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
    "call j12init_color_converter\n"
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
    ".size __wrap_j12init_color_converter, .-__wrap_j12init_color_converter\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_color_deconverter(int): */
    ".text\n"
    ".global __wrap_j12init_color_deconverter\n"
    ".type __wrap_j12init_color_deconverter, @function\n"
    "__wrap_j12init_color_deconverter:\n"
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
    "call j12init_color_deconverter\n"
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
    ".size __wrap_j12init_color_deconverter, .-__wrap_j12init_color_deconverter\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_d_coef_controller(int, int): */
    ".text\n"
    ".global __wrap_j12init_d_coef_controller\n"
    ".type __wrap_j12init_d_coef_controller, @function\n"
    "__wrap_j12init_d_coef_controller:\n"
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
    "call j12init_d_coef_controller\n"
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
    ".size __wrap_j12init_d_coef_controller, .-__wrap_j12init_d_coef_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_d_diff_controller(int, int): */
    ".text\n"
    ".global __wrap_j12init_d_diff_controller\n"
    ".type __wrap_j12init_d_diff_controller, @function\n"
    "__wrap_j12init_d_diff_controller:\n"
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
    "call j12init_d_diff_controller\n"
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
    ".size __wrap_j12init_d_diff_controller, .-__wrap_j12init_d_diff_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_d_main_controller(int, int): */
    ".text\n"
    ".global __wrap_j12init_d_main_controller\n"
    ".type __wrap_j12init_d_main_controller, @function\n"
    "__wrap_j12init_d_main_controller:\n"
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
    "call j12init_d_main_controller\n"
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
    ".size __wrap_j12init_d_main_controller, .-__wrap_j12init_d_main_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_d_post_controller(int, int): */
    ".text\n"
    ".global __wrap_j12init_d_post_controller\n"
    ".type __wrap_j12init_d_post_controller, @function\n"
    "__wrap_j12init_d_post_controller:\n"
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
    "call j12init_d_post_controller\n"
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
    ".size __wrap_j12init_d_post_controller, .-__wrap_j12init_d_post_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_downsampler(int): */
    ".text\n"
    ".global __wrap_j12init_downsampler\n"
    ".type __wrap_j12init_downsampler, @function\n"
    "__wrap_j12init_downsampler:\n"
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
    "call j12init_downsampler\n"
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
    ".size __wrap_j12init_downsampler, .-__wrap_j12init_downsampler\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_forward_dct(int): */
    ".text\n"
    ".global __wrap_j12init_forward_dct\n"
    ".type __wrap_j12init_forward_dct, @function\n"
    "__wrap_j12init_forward_dct:\n"
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
    "call j12init_forward_dct\n"
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
    ".size __wrap_j12init_forward_dct, .-__wrap_j12init_forward_dct\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_inverse_dct(int): */
    ".text\n"
    ".global __wrap_j12init_inverse_dct\n"
    ".type __wrap_j12init_inverse_dct, @function\n"
    "__wrap_j12init_inverse_dct:\n"
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
    "call j12init_inverse_dct\n"
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
    ".size __wrap_j12init_inverse_dct, .-__wrap_j12init_inverse_dct\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_lossless_compressor(int): */
    ".text\n"
    ".global __wrap_j12init_lossless_compressor\n"
    ".type __wrap_j12init_lossless_compressor, @function\n"
    "__wrap_j12init_lossless_compressor:\n"
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
    "call j12init_lossless_compressor\n"
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
    ".size __wrap_j12init_lossless_compressor, .-__wrap_j12init_lossless_compressor\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_lossless_decompressor(int): */
    ".text\n"
    ".global __wrap_j12init_lossless_decompressor\n"
    ".type __wrap_j12init_lossless_decompressor, @function\n"
    "__wrap_j12init_lossless_decompressor:\n"
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
    "call j12init_lossless_decompressor\n"
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
    ".size __wrap_j12init_lossless_decompressor, .-__wrap_j12init_lossless_decompressor\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_merged_upsampler(int): */
    ".text\n"
    ".global __wrap_j12init_merged_upsampler\n"
    ".type __wrap_j12init_merged_upsampler, @function\n"
    "__wrap_j12init_merged_upsampler:\n"
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
    "call j12init_merged_upsampler\n"
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
    ".size __wrap_j12init_merged_upsampler, .-__wrap_j12init_merged_upsampler\n"
    ".previous\n"
);
asm(
    /* Wrapper for j12init_upsampler(int): */
    ".text\n"
    ".global __wrap_j12init_upsampler\n"
    ".type __wrap_j12init_upsampler, @function\n"
    "__wrap_j12init_upsampler:\n"
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
    "call j12init_upsampler\n"
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
    ".size __wrap_j12init_upsampler, .-__wrap_j12init_upsampler\n"
    ".previous\n"
);
asm(
    /* Wrapper for j16copy_sample_rows(int, int, int, int, int, int): */
    ".text\n"
    ".global __wrap_j16copy_sample_rows\n"
    ".type __wrap_j16copy_sample_rows, @function\n"
    "__wrap_j16copy_sample_rows:\n"
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
    "call j16copy_sample_rows\n"
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
    ".size __wrap_j16copy_sample_rows, .-__wrap_j16copy_sample_rows\n"
    ".previous\n"
);
asm(
    /* Wrapper for j16init_c_diff_controller(int, int): */
    ".text\n"
    ".global __wrap_j16init_c_diff_controller\n"
    ".type __wrap_j16init_c_diff_controller, @function\n"
    "__wrap_j16init_c_diff_controller:\n"
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
    "call j16init_c_diff_controller\n"
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
    ".size __wrap_j16init_c_diff_controller, .-__wrap_j16init_c_diff_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for j16init_c_main_controller(int, int): */
    ".text\n"
    ".global __wrap_j16init_c_main_controller\n"
    ".type __wrap_j16init_c_main_controller, @function\n"
    "__wrap_j16init_c_main_controller:\n"
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
    "call j16init_c_main_controller\n"
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
    ".size __wrap_j16init_c_main_controller, .-__wrap_j16init_c_main_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for j16init_c_prep_controller(int, int): */
    ".text\n"
    ".global __wrap_j16init_c_prep_controller\n"
    ".type __wrap_j16init_c_prep_controller, @function\n"
    "__wrap_j16init_c_prep_controller:\n"
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
    "call j16init_c_prep_controller\n"
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
    ".size __wrap_j16init_c_prep_controller, .-__wrap_j16init_c_prep_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for j16init_color_converter(int): */
    ".text\n"
    ".global __wrap_j16init_color_converter\n"
    ".type __wrap_j16init_color_converter, @function\n"
    "__wrap_j16init_color_converter:\n"
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
    "call j16init_color_converter\n"
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
    ".size __wrap_j16init_color_converter, .-__wrap_j16init_color_converter\n"
    ".previous\n"
);
asm(
    /* Wrapper for j16init_color_deconverter(int): */
    ".text\n"
    ".global __wrap_j16init_color_deconverter\n"
    ".type __wrap_j16init_color_deconverter, @function\n"
    "__wrap_j16init_color_deconverter:\n"
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
    "call j16init_color_deconverter\n"
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
    ".size __wrap_j16init_color_deconverter, .-__wrap_j16init_color_deconverter\n"
    ".previous\n"
);
asm(
    /* Wrapper for j16init_d_diff_controller(int, int): */
    ".text\n"
    ".global __wrap_j16init_d_diff_controller\n"
    ".type __wrap_j16init_d_diff_controller, @function\n"
    "__wrap_j16init_d_diff_controller:\n"
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
    "call j16init_d_diff_controller\n"
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
    ".size __wrap_j16init_d_diff_controller, .-__wrap_j16init_d_diff_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for j16init_d_main_controller(int, int): */
    ".text\n"
    ".global __wrap_j16init_d_main_controller\n"
    ".type __wrap_j16init_d_main_controller, @function\n"
    "__wrap_j16init_d_main_controller:\n"
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
    "call j16init_d_main_controller\n"
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
    ".size __wrap_j16init_d_main_controller, .-__wrap_j16init_d_main_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for j16init_d_post_controller(int, int): */
    ".text\n"
    ".global __wrap_j16init_d_post_controller\n"
    ".type __wrap_j16init_d_post_controller, @function\n"
    "__wrap_j16init_d_post_controller:\n"
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
    "call j16init_d_post_controller\n"
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
    ".size __wrap_j16init_d_post_controller, .-__wrap_j16init_d_post_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for j16init_downsampler(int): */
    ".text\n"
    ".global __wrap_j16init_downsampler\n"
    ".type __wrap_j16init_downsampler, @function\n"
    "__wrap_j16init_downsampler:\n"
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
    "call j16init_downsampler\n"
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
    ".size __wrap_j16init_downsampler, .-__wrap_j16init_downsampler\n"
    ".previous\n"
);
asm(
    /* Wrapper for j16init_lossless_compressor(int): */
    ".text\n"
    ".global __wrap_j16init_lossless_compressor\n"
    ".type __wrap_j16init_lossless_compressor, @function\n"
    "__wrap_j16init_lossless_compressor:\n"
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
    "call j16init_lossless_compressor\n"
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
    ".size __wrap_j16init_lossless_compressor, .-__wrap_j16init_lossless_compressor\n"
    ".previous\n"
);
asm(
    /* Wrapper for j16init_lossless_decompressor(int): */
    ".text\n"
    ".global __wrap_j16init_lossless_decompressor\n"
    ".type __wrap_j16init_lossless_decompressor, @function\n"
    "__wrap_j16init_lossless_decompressor:\n"
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
    "call j16init_lossless_decompressor\n"
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
    ".size __wrap_j16init_lossless_decompressor, .-__wrap_j16init_lossless_decompressor\n"
    ".previous\n"
);
asm(
    /* Wrapper for j16init_upsampler(int): */
    ".text\n"
    ".global __wrap_j16init_upsampler\n"
    ".type __wrap_j16init_upsampler, @function\n"
    "__wrap_j16init_upsampler:\n"
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
    "call j16init_upsampler\n"
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
    ".size __wrap_j16init_upsampler, .-__wrap_j16init_upsampler\n"
    ".previous\n"
);
asm(
    /* Wrapper for jcopy_block_row(int, int, int): */
    ".text\n"
    ".global __wrap_jcopy_block_row\n"
    ".type __wrap_jcopy_block_row, @function\n"
    "__wrap_jcopy_block_row:\n"
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
    "call jcopy_block_row\n"
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
    ".size __wrap_jcopy_block_row, .-__wrap_jcopy_block_row\n"
    ".previous\n"
);
asm(
    /* Wrapper for jcopy_sample_rows(int, int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jcopy_sample_rows\n"
    ".type __wrap_jcopy_sample_rows, @function\n"
    "__wrap_jcopy_sample_rows:\n"
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
    "call jcopy_sample_rows\n"
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
    ".size __wrap_jcopy_sample_rows, .-__wrap_jcopy_sample_rows\n"
    ".previous\n"
);
asm(
    /* Wrapper for jdiv_round_up(int, int) -> int: */
    ".text\n"
    ".global __wrap_jdiv_round_up\n"
    ".type __wrap_jdiv_round_up, @function\n"
    "__wrap_jdiv_round_up:\n"
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
    "call jdiv_round_up\n"
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
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    ".size __wrap_jdiv_round_up, .-__wrap_jdiv_round_up\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_1pass_quantizer(int): */
    ".text\n"
    ".global __wrap_jinit_1pass_quantizer\n"
    ".type __wrap_jinit_1pass_quantizer, @function\n"
    "__wrap_jinit_1pass_quantizer:\n"
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
    "call jinit_1pass_quantizer\n"
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
    ".size __wrap_jinit_1pass_quantizer, .-__wrap_jinit_1pass_quantizer\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_2pass_quantizer(int): */
    ".text\n"
    ".global __wrap_jinit_2pass_quantizer\n"
    ".type __wrap_jinit_2pass_quantizer, @function\n"
    "__wrap_jinit_2pass_quantizer:\n"
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
    "call jinit_2pass_quantizer\n"
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
    ".size __wrap_jinit_2pass_quantizer, .-__wrap_jinit_2pass_quantizer\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_c_coef_controller(int, int): */
    ".text\n"
    ".global __wrap_jinit_c_coef_controller\n"
    ".type __wrap_jinit_c_coef_controller, @function\n"
    "__wrap_jinit_c_coef_controller:\n"
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
    "call jinit_c_coef_controller\n"
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
    ".size __wrap_jinit_c_coef_controller, .-__wrap_jinit_c_coef_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_c_diff_controller(int, int): */
    ".text\n"
    ".global __wrap_jinit_c_diff_controller\n"
    ".type __wrap_jinit_c_diff_controller, @function\n"
    "__wrap_jinit_c_diff_controller:\n"
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
    "call jinit_c_diff_controller\n"
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
    ".size __wrap_jinit_c_diff_controller, .-__wrap_jinit_c_diff_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_c_main_controller(int, int): */
    ".text\n"
    ".global __wrap_jinit_c_main_controller\n"
    ".type __wrap_jinit_c_main_controller, @function\n"
    "__wrap_jinit_c_main_controller:\n"
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
    "call jinit_c_main_controller\n"
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
    ".size __wrap_jinit_c_main_controller, .-__wrap_jinit_c_main_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_c_master_control(int, int): */
    ".text\n"
    ".global __wrap_jinit_c_master_control\n"
    ".type __wrap_jinit_c_master_control, @function\n"
    "__wrap_jinit_c_master_control:\n"
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
    "call jinit_c_master_control\n"
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
    ".size __wrap_jinit_c_master_control, .-__wrap_jinit_c_master_control\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_c_prep_controller(int, int): */
    ".text\n"
    ".global __wrap_jinit_c_prep_controller\n"
    ".type __wrap_jinit_c_prep_controller, @function\n"
    "__wrap_jinit_c_prep_controller:\n"
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
    "call jinit_c_prep_controller\n"
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
    ".size __wrap_jinit_c_prep_controller, .-__wrap_jinit_c_prep_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_color_converter(int): */
    ".text\n"
    ".global __wrap_jinit_color_converter\n"
    ".type __wrap_jinit_color_converter, @function\n"
    "__wrap_jinit_color_converter:\n"
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
    "call jinit_color_converter\n"
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
    ".size __wrap_jinit_color_converter, .-__wrap_jinit_color_converter\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_color_deconverter(int): */
    ".text\n"
    ".global __wrap_jinit_color_deconverter\n"
    ".type __wrap_jinit_color_deconverter, @function\n"
    "__wrap_jinit_color_deconverter:\n"
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
    "call jinit_color_deconverter\n"
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
    ".size __wrap_jinit_color_deconverter, .-__wrap_jinit_color_deconverter\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_compress_master(int): */
    ".text\n"
    ".global __wrap_jinit_compress_master\n"
    ".type __wrap_jinit_compress_master, @function\n"
    "__wrap_jinit_compress_master:\n"
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
    "call jinit_compress_master\n"
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
    ".size __wrap_jinit_compress_master, .-__wrap_jinit_compress_master\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_d_coef_controller(int, int): */
    ".text\n"
    ".global __wrap_jinit_d_coef_controller\n"
    ".type __wrap_jinit_d_coef_controller, @function\n"
    "__wrap_jinit_d_coef_controller:\n"
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
    "call jinit_d_coef_controller\n"
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
    ".size __wrap_jinit_d_coef_controller, .-__wrap_jinit_d_coef_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_d_diff_controller(int, int): */
    ".text\n"
    ".global __wrap_jinit_d_diff_controller\n"
    ".type __wrap_jinit_d_diff_controller, @function\n"
    "__wrap_jinit_d_diff_controller:\n"
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
    "call jinit_d_diff_controller\n"
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
    ".size __wrap_jinit_d_diff_controller, .-__wrap_jinit_d_diff_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_d_main_controller(int, int): */
    ".text\n"
    ".global __wrap_jinit_d_main_controller\n"
    ".type __wrap_jinit_d_main_controller, @function\n"
    "__wrap_jinit_d_main_controller:\n"
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
    "call jinit_d_main_controller\n"
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
    ".size __wrap_jinit_d_main_controller, .-__wrap_jinit_d_main_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_d_post_controller(int, int): */
    ".text\n"
    ".global __wrap_jinit_d_post_controller\n"
    ".type __wrap_jinit_d_post_controller, @function\n"
    "__wrap_jinit_d_post_controller:\n"
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
    "call jinit_d_post_controller\n"
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
    ".size __wrap_jinit_d_post_controller, .-__wrap_jinit_d_post_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_downsampler(int): */
    ".text\n"
    ".global __wrap_jinit_downsampler\n"
    ".type __wrap_jinit_downsampler, @function\n"
    "__wrap_jinit_downsampler:\n"
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
    "call jinit_downsampler\n"
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
    ".size __wrap_jinit_downsampler, .-__wrap_jinit_downsampler\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_forward_dct(int): */
    ".text\n"
    ".global __wrap_jinit_forward_dct\n"
    ".type __wrap_jinit_forward_dct, @function\n"
    "__wrap_jinit_forward_dct:\n"
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
    "call jinit_forward_dct\n"
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
    ".size __wrap_jinit_forward_dct, .-__wrap_jinit_forward_dct\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_huff_decoder(int): */
    ".text\n"
    ".global __wrap_jinit_huff_decoder\n"
    ".type __wrap_jinit_huff_decoder, @function\n"
    "__wrap_jinit_huff_decoder:\n"
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
    "call jinit_huff_decoder\n"
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
    ".size __wrap_jinit_huff_decoder, .-__wrap_jinit_huff_decoder\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_huff_encoder(int): */
    ".text\n"
    ".global __wrap_jinit_huff_encoder\n"
    ".type __wrap_jinit_huff_encoder, @function\n"
    "__wrap_jinit_huff_encoder:\n"
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
    "call jinit_huff_encoder\n"
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
    ".size __wrap_jinit_huff_encoder, .-__wrap_jinit_huff_encoder\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_input_controller(int): */
    ".text\n"
    ".global __wrap_jinit_input_controller\n"
    ".type __wrap_jinit_input_controller, @function\n"
    "__wrap_jinit_input_controller:\n"
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
    "call jinit_input_controller\n"
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
    ".size __wrap_jinit_input_controller, .-__wrap_jinit_input_controller\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_inverse_dct(int): */
    ".text\n"
    ".global __wrap_jinit_inverse_dct\n"
    ".type __wrap_jinit_inverse_dct, @function\n"
    "__wrap_jinit_inverse_dct:\n"
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
    "call jinit_inverse_dct\n"
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
    ".size __wrap_jinit_inverse_dct, .-__wrap_jinit_inverse_dct\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_lhuff_decoder(int): */
    ".text\n"
    ".global __wrap_jinit_lhuff_decoder\n"
    ".type __wrap_jinit_lhuff_decoder, @function\n"
    "__wrap_jinit_lhuff_decoder:\n"
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
    "call jinit_lhuff_decoder\n"
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
    ".size __wrap_jinit_lhuff_decoder, .-__wrap_jinit_lhuff_decoder\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_lhuff_encoder(int): */
    ".text\n"
    ".global __wrap_jinit_lhuff_encoder\n"
    ".type __wrap_jinit_lhuff_encoder, @function\n"
    "__wrap_jinit_lhuff_encoder:\n"
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
    "call jinit_lhuff_encoder\n"
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
    ".size __wrap_jinit_lhuff_encoder, .-__wrap_jinit_lhuff_encoder\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_lossless_compressor(int): */
    ".text\n"
    ".global __wrap_jinit_lossless_compressor\n"
    ".type __wrap_jinit_lossless_compressor, @function\n"
    "__wrap_jinit_lossless_compressor:\n"
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
    "call jinit_lossless_compressor\n"
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
    ".size __wrap_jinit_lossless_compressor, .-__wrap_jinit_lossless_compressor\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_lossless_decompressor(int): */
    ".text\n"
    ".global __wrap_jinit_lossless_decompressor\n"
    ".type __wrap_jinit_lossless_decompressor, @function\n"
    "__wrap_jinit_lossless_decompressor:\n"
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
    "call jinit_lossless_decompressor\n"
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
    ".size __wrap_jinit_lossless_decompressor, .-__wrap_jinit_lossless_decompressor\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_marker_reader(int): */
    ".text\n"
    ".global __wrap_jinit_marker_reader\n"
    ".type __wrap_jinit_marker_reader, @function\n"
    "__wrap_jinit_marker_reader:\n"
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
    "call jinit_marker_reader\n"
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
    ".size __wrap_jinit_marker_reader, .-__wrap_jinit_marker_reader\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_marker_writer(int): */
    ".text\n"
    ".global __wrap_jinit_marker_writer\n"
    ".type __wrap_jinit_marker_writer, @function\n"
    "__wrap_jinit_marker_writer:\n"
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
    "call jinit_marker_writer\n"
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
    ".size __wrap_jinit_marker_writer, .-__wrap_jinit_marker_writer\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_master_decompress(int): */
    ".text\n"
    ".global __wrap_jinit_master_decompress\n"
    ".type __wrap_jinit_master_decompress, @function\n"
    "__wrap_jinit_master_decompress:\n"
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
    "call jinit_master_decompress\n"
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
    ".size __wrap_jinit_master_decompress, .-__wrap_jinit_master_decompress\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_memory_mgr(int): */
    ".text\n"
    ".global __wrap_jinit_memory_mgr\n"
    ".type __wrap_jinit_memory_mgr, @function\n"
    "__wrap_jinit_memory_mgr:\n"
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
    "call jinit_memory_mgr\n"
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
    ".size __wrap_jinit_memory_mgr, .-__wrap_jinit_memory_mgr\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_merged_upsampler(int): */
    ".text\n"
    ".global __wrap_jinit_merged_upsampler\n"
    ".type __wrap_jinit_merged_upsampler, @function\n"
    "__wrap_jinit_merged_upsampler:\n"
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
    "call jinit_merged_upsampler\n"
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
    ".size __wrap_jinit_merged_upsampler, .-__wrap_jinit_merged_upsampler\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_phuff_decoder(int): */
    ".text\n"
    ".global __wrap_jinit_phuff_decoder\n"
    ".type __wrap_jinit_phuff_decoder, @function\n"
    "__wrap_jinit_phuff_decoder:\n"
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
    "call jinit_phuff_decoder\n"
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
    ".size __wrap_jinit_phuff_decoder, .-__wrap_jinit_phuff_decoder\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_phuff_encoder(int): */
    ".text\n"
    ".global __wrap_jinit_phuff_encoder\n"
    ".type __wrap_jinit_phuff_encoder, @function\n"
    "__wrap_jinit_phuff_encoder:\n"
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
    "call jinit_phuff_encoder\n"
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
    ".size __wrap_jinit_phuff_encoder, .-__wrap_jinit_phuff_encoder\n"
    ".previous\n"
);
asm(
    /* Wrapper for jinit_upsampler(int): */
    ".text\n"
    ".global __wrap_jinit_upsampler\n"
    ".type __wrap_jinit_upsampler, @function\n"
    "__wrap_jinit_upsampler:\n"
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
    "call jinit_upsampler\n"
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
    ".size __wrap_jinit_upsampler, .-__wrap_jinit_upsampler\n"
    ".previous\n"
);
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
    ".size __wrap_jpeg12_crop_scanline, .-__wrap_jpeg12_crop_scanline\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_fdct_ifast(int): */
    ".text\n"
    ".global __wrap_jpeg12_fdct_ifast\n"
    ".type __wrap_jpeg12_fdct_ifast, @function\n"
    "__wrap_jpeg12_fdct_ifast:\n"
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
    "call jpeg12_fdct_ifast\n"
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
    ".size __wrap_jpeg12_fdct_ifast, .-__wrap_jpeg12_fdct_ifast\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_fdct_islow(int): */
    ".text\n"
    ".global __wrap_jpeg12_fdct_islow\n"
    ".type __wrap_jpeg12_fdct_islow, @function\n"
    "__wrap_jpeg12_fdct_islow:\n"
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
    "call jpeg12_fdct_islow\n"
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
    ".size __wrap_jpeg12_fdct_islow, .-__wrap_jpeg12_fdct_islow\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_10x10(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_10x10\n"
    ".type __wrap_jpeg12_idct_10x10, @function\n"
    "__wrap_jpeg12_idct_10x10:\n"
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
    "call jpeg12_idct_10x10\n"
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
    ".size __wrap_jpeg12_idct_10x10, .-__wrap_jpeg12_idct_10x10\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_11x11(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_11x11\n"
    ".type __wrap_jpeg12_idct_11x11, @function\n"
    "__wrap_jpeg12_idct_11x11:\n"
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
    "call jpeg12_idct_11x11\n"
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
    ".size __wrap_jpeg12_idct_11x11, .-__wrap_jpeg12_idct_11x11\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_12x12(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_12x12\n"
    ".type __wrap_jpeg12_idct_12x12, @function\n"
    "__wrap_jpeg12_idct_12x12:\n"
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
    "call jpeg12_idct_12x12\n"
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
    ".size __wrap_jpeg12_idct_12x12, .-__wrap_jpeg12_idct_12x12\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_13x13(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_13x13\n"
    ".type __wrap_jpeg12_idct_13x13, @function\n"
    "__wrap_jpeg12_idct_13x13:\n"
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
    "call jpeg12_idct_13x13\n"
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
    ".size __wrap_jpeg12_idct_13x13, .-__wrap_jpeg12_idct_13x13\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_14x14(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_14x14\n"
    ".type __wrap_jpeg12_idct_14x14, @function\n"
    "__wrap_jpeg12_idct_14x14:\n"
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
    "call jpeg12_idct_14x14\n"
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
    ".size __wrap_jpeg12_idct_14x14, .-__wrap_jpeg12_idct_14x14\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_15x15(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_15x15\n"
    ".type __wrap_jpeg12_idct_15x15, @function\n"
    "__wrap_jpeg12_idct_15x15:\n"
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
    "call jpeg12_idct_15x15\n"
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
    ".size __wrap_jpeg12_idct_15x15, .-__wrap_jpeg12_idct_15x15\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_16x16(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_16x16\n"
    ".type __wrap_jpeg12_idct_16x16, @function\n"
    "__wrap_jpeg12_idct_16x16:\n"
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
    "call jpeg12_idct_16x16\n"
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
    ".size __wrap_jpeg12_idct_16x16, .-__wrap_jpeg12_idct_16x16\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_1x1(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_1x1\n"
    ".type __wrap_jpeg12_idct_1x1, @function\n"
    "__wrap_jpeg12_idct_1x1:\n"
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
    "call jpeg12_idct_1x1\n"
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
    ".size __wrap_jpeg12_idct_1x1, .-__wrap_jpeg12_idct_1x1\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_2x2(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_2x2\n"
    ".type __wrap_jpeg12_idct_2x2, @function\n"
    "__wrap_jpeg12_idct_2x2:\n"
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
    "call jpeg12_idct_2x2\n"
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
    ".size __wrap_jpeg12_idct_2x2, .-__wrap_jpeg12_idct_2x2\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_3x3(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_3x3\n"
    ".type __wrap_jpeg12_idct_3x3, @function\n"
    "__wrap_jpeg12_idct_3x3:\n"
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
    "call jpeg12_idct_3x3\n"
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
    ".size __wrap_jpeg12_idct_3x3, .-__wrap_jpeg12_idct_3x3\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_4x4(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_4x4\n"
    ".type __wrap_jpeg12_idct_4x4, @function\n"
    "__wrap_jpeg12_idct_4x4:\n"
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
    "call jpeg12_idct_4x4\n"
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
    ".size __wrap_jpeg12_idct_4x4, .-__wrap_jpeg12_idct_4x4\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_5x5(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_5x5\n"
    ".type __wrap_jpeg12_idct_5x5, @function\n"
    "__wrap_jpeg12_idct_5x5:\n"
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
    "call jpeg12_idct_5x5\n"
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
    ".size __wrap_jpeg12_idct_5x5, .-__wrap_jpeg12_idct_5x5\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_6x6(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_6x6\n"
    ".type __wrap_jpeg12_idct_6x6, @function\n"
    "__wrap_jpeg12_idct_6x6:\n"
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
    "call jpeg12_idct_6x6\n"
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
    ".size __wrap_jpeg12_idct_6x6, .-__wrap_jpeg12_idct_6x6\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_7x7(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_7x7\n"
    ".type __wrap_jpeg12_idct_7x7, @function\n"
    "__wrap_jpeg12_idct_7x7:\n"
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
    "call jpeg12_idct_7x7\n"
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
    ".size __wrap_jpeg12_idct_7x7, .-__wrap_jpeg12_idct_7x7\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_9x9(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_9x9\n"
    ".type __wrap_jpeg12_idct_9x9, @function\n"
    "__wrap_jpeg12_idct_9x9:\n"
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
    "call jpeg12_idct_9x9\n"
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
    ".size __wrap_jpeg12_idct_9x9, .-__wrap_jpeg12_idct_9x9\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_float(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_float\n"
    ".type __wrap_jpeg12_idct_float, @function\n"
    "__wrap_jpeg12_idct_float:\n"
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
    "call jpeg12_idct_float\n"
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
    ".size __wrap_jpeg12_idct_float, .-__wrap_jpeg12_idct_float\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_ifast(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_ifast\n"
    ".type __wrap_jpeg12_idct_ifast, @function\n"
    "__wrap_jpeg12_idct_ifast:\n"
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
    "call jpeg12_idct_ifast\n"
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
    ".size __wrap_jpeg12_idct_ifast, .-__wrap_jpeg12_idct_ifast\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg12_idct_islow(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg12_idct_islow\n"
    ".type __wrap_jpeg12_idct_islow, @function\n"
    "__wrap_jpeg12_idct_islow:\n"
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
    "call jpeg12_idct_islow\n"
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
    ".size __wrap_jpeg12_idct_islow, .-__wrap_jpeg12_idct_islow\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    ".size __wrap_jpeg_enable_lossless, .-__wrap_jpeg_enable_lossless\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_fdct_float(int): */
    ".text\n"
    ".global __wrap_jpeg_fdct_float\n"
    ".type __wrap_jpeg_fdct_float, @function\n"
    "__wrap_jpeg_fdct_float:\n"
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
    "call jpeg_fdct_float\n"
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
    ".size __wrap_jpeg_fdct_float, .-__wrap_jpeg_fdct_float\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_fdct_ifast(int): */
    ".text\n"
    ".global __wrap_jpeg_fdct_ifast\n"
    ".type __wrap_jpeg_fdct_ifast, @function\n"
    "__wrap_jpeg_fdct_ifast:\n"
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
    "call jpeg_fdct_ifast\n"
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
    ".size __wrap_jpeg_fdct_ifast, .-__wrap_jpeg_fdct_ifast\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_fdct_islow(int): */
    ".text\n"
    ".global __wrap_jpeg_fdct_islow\n"
    ".type __wrap_jpeg_fdct_islow, @function\n"
    "__wrap_jpeg_fdct_islow:\n"
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
    "call jpeg_fdct_islow\n"
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
    ".size __wrap_jpeg_fdct_islow, .-__wrap_jpeg_fdct_islow\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    ".size __wrap_jpeg_has_multiple_scans, .-__wrap_jpeg_has_multiple_scans\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_10x10(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_10x10\n"
    ".type __wrap_jpeg_idct_10x10, @function\n"
    "__wrap_jpeg_idct_10x10:\n"
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
    "call jpeg_idct_10x10\n"
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
    ".size __wrap_jpeg_idct_10x10, .-__wrap_jpeg_idct_10x10\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_11x11(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_11x11\n"
    ".type __wrap_jpeg_idct_11x11, @function\n"
    "__wrap_jpeg_idct_11x11:\n"
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
    "call jpeg_idct_11x11\n"
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
    ".size __wrap_jpeg_idct_11x11, .-__wrap_jpeg_idct_11x11\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_12x12(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_12x12\n"
    ".type __wrap_jpeg_idct_12x12, @function\n"
    "__wrap_jpeg_idct_12x12:\n"
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
    "call jpeg_idct_12x12\n"
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
    ".size __wrap_jpeg_idct_12x12, .-__wrap_jpeg_idct_12x12\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_13x13(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_13x13\n"
    ".type __wrap_jpeg_idct_13x13, @function\n"
    "__wrap_jpeg_idct_13x13:\n"
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
    "call jpeg_idct_13x13\n"
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
    ".size __wrap_jpeg_idct_13x13, .-__wrap_jpeg_idct_13x13\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_14x14(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_14x14\n"
    ".type __wrap_jpeg_idct_14x14, @function\n"
    "__wrap_jpeg_idct_14x14:\n"
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
    "call jpeg_idct_14x14\n"
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
    ".size __wrap_jpeg_idct_14x14, .-__wrap_jpeg_idct_14x14\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_15x15(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_15x15\n"
    ".type __wrap_jpeg_idct_15x15, @function\n"
    "__wrap_jpeg_idct_15x15:\n"
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
    "call jpeg_idct_15x15\n"
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
    ".size __wrap_jpeg_idct_15x15, .-__wrap_jpeg_idct_15x15\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_16x16(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_16x16\n"
    ".type __wrap_jpeg_idct_16x16, @function\n"
    "__wrap_jpeg_idct_16x16:\n"
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
    "call jpeg_idct_16x16\n"
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
    ".size __wrap_jpeg_idct_16x16, .-__wrap_jpeg_idct_16x16\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_1x1(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_1x1\n"
    ".type __wrap_jpeg_idct_1x1, @function\n"
    "__wrap_jpeg_idct_1x1:\n"
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
    "call jpeg_idct_1x1\n"
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
    ".size __wrap_jpeg_idct_1x1, .-__wrap_jpeg_idct_1x1\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_2x2(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_2x2\n"
    ".type __wrap_jpeg_idct_2x2, @function\n"
    "__wrap_jpeg_idct_2x2:\n"
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
    "call jpeg_idct_2x2\n"
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
    ".size __wrap_jpeg_idct_2x2, .-__wrap_jpeg_idct_2x2\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_3x3(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_3x3\n"
    ".type __wrap_jpeg_idct_3x3, @function\n"
    "__wrap_jpeg_idct_3x3:\n"
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
    "call jpeg_idct_3x3\n"
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
    ".size __wrap_jpeg_idct_3x3, .-__wrap_jpeg_idct_3x3\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_4x4(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_4x4\n"
    ".type __wrap_jpeg_idct_4x4, @function\n"
    "__wrap_jpeg_idct_4x4:\n"
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
    "call jpeg_idct_4x4\n"
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
    ".size __wrap_jpeg_idct_4x4, .-__wrap_jpeg_idct_4x4\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_5x5(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_5x5\n"
    ".type __wrap_jpeg_idct_5x5, @function\n"
    "__wrap_jpeg_idct_5x5:\n"
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
    "call jpeg_idct_5x5\n"
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
    ".size __wrap_jpeg_idct_5x5, .-__wrap_jpeg_idct_5x5\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_6x6(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_6x6\n"
    ".type __wrap_jpeg_idct_6x6, @function\n"
    "__wrap_jpeg_idct_6x6:\n"
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
    "call jpeg_idct_6x6\n"
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
    ".size __wrap_jpeg_idct_6x6, .-__wrap_jpeg_idct_6x6\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_7x7(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_7x7\n"
    ".type __wrap_jpeg_idct_7x7, @function\n"
    "__wrap_jpeg_idct_7x7:\n"
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
    "call jpeg_idct_7x7\n"
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
    ".size __wrap_jpeg_idct_7x7, .-__wrap_jpeg_idct_7x7\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_9x9(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_9x9\n"
    ".type __wrap_jpeg_idct_9x9, @function\n"
    "__wrap_jpeg_idct_9x9:\n"
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
    "call jpeg_idct_9x9\n"
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
    ".size __wrap_jpeg_idct_9x9, .-__wrap_jpeg_idct_9x9\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_float(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_float\n"
    ".type __wrap_jpeg_idct_float, @function\n"
    "__wrap_jpeg_idct_float:\n"
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
    "call jpeg_idct_float\n"
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
    ".size __wrap_jpeg_idct_float, .-__wrap_jpeg_idct_float\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_ifast(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_ifast\n"
    ".type __wrap_jpeg_idct_ifast, @function\n"
    "__wrap_jpeg_idct_ifast:\n"
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
    "call jpeg_idct_ifast\n"
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
    ".size __wrap_jpeg_idct_ifast, .-__wrap_jpeg_idct_ifast\n"
    ".previous\n"
);
asm(
    /* Wrapper for jpeg_idct_islow(int, int, int, int, int): */
    ".text\n"
    ".global __wrap_jpeg_idct_islow\n"
    ".type __wrap_jpeg_idct_islow, @function\n"
    "__wrap_jpeg_idct_islow:\n"
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
    "call jpeg_idct_islow\n"
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
    ".size __wrap_jpeg_idct_islow, .-__wrap_jpeg_idct_islow\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    ".size __wrap_jpeg_write_tables, .-__wrap_jpeg_write_tables\n"
    ".previous\n"
);
asm(
    /* Wrapper for jround_up(int, int) -> int: */
    ".text\n"
    ".global __wrap_jround_up\n"
    ".type __wrap_jround_up, @function\n"
    "__wrap_jround_up:\n"
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
    "call jround_up\n"
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
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
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
    ".size __wrap_jround_up, .-__wrap_jround_up\n"
    ".previous\n"
);
asm(
    /* Wrapper for jzero_far(int, int): */
    ".text\n"
    ".global __wrap_jzero_far\n"
    ".type __wrap_jzero_far, @function\n"
    "__wrap_jzero_far:\n"
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
    "call jzero_far\n"
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
    ".size __wrap_jzero_far, .-__wrap_jzero_far\n"
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
