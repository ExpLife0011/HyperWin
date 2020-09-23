#ifndef __TYPES_H_
#define __TYPES_H_

typedef unsigned int UINT32;
typedef unsigned long DWORD, *DWORD_PTR;
typedef unsigned long long UINT64;
typedef unsigned long long QWORD, *QWORD_PTR;
typedef unsigned char BOOL;
typedef unsigned char BYTE, UCHAR, *BYTE_PTR;
typedef unsigned short WORD, *WORD_PTR;
typedef char CHAR, *PCHAR;
typedef int INT;

#define STATUS QWORD
#define STATUS_SUCCESS 0
#define STATUS_FAILURE 1
#define STATUS_RSDP_NOT_FOUND 2
#define STATUS_RSDP_INVALID_CHECKSUM 3

#define va_list __builtin_va_list
#define va_start(v,l) __builtin_va_start(v,l)
#define va_end(v) __builtin_va_end(v)
#define va_arg(v,l) __builtin_va_arg(v,l)

#define VOID void
#define FALSE (0)
#define TRUE (!(FALSE))

#define OUT
#define IN

#ifndef NULL
#define NULL (void*)0
#endif

typedef struct _REGISTERS
{
    QWORD rax;
    QWORD rbx;
    QWORD rcx;
    QWORD rdx;
    QWORD rsi;
    QWORD rdi;
    QWORD rbp;
    QWORD rsp;
    QWORD r8;
    QWORD r9;
    QWORD r10;
    QWORD r11;
    QWORD r12;
    QWORD r13;
    QWORD r14;
    QWORD r15;
}REGISTERS, *PREGISTERS;

#endif