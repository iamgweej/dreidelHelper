#include "pic.h"

#include <Windows.h>
#include <intrin.h>

#pragma optimize("", off)

void PIC_CODE picmain() {
	__debugbreak();
}

#pragma optimize("", on)
