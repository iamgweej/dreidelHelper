#pragma once

#include <Windows.h>

#pragma section(".pic", read, execute)

#pragma code_seg(".pic$1")
#pragma code_seg(".pic$2")
#pragma code_seg(".pic$3")
#pragma code_seg()

__declspec(allocate(".pic$1")) static char s_picStart = 0;
__declspec(allocate(".pic$3")) static char s_picEnd = 0;

#define PIC_CODE __declspec(code_seg(".pic$2")) __declspec(noinline)

#define PIC_CONST_WSTR(mn, cwstr) wchar_t mn[sizeof(cwstr)/sizeof(wchar_t)] = cwstr
#define PIC_CONST_STR(mn, cstr) char mn[sizeof(cstr)/sizeof(char)] = cstr
#define PIC_FUNCTION(mn, fn) decltype(&fn) mn;

void PIC_CODE picmain();
