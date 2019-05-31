// Dll.cpp : DLL 응용 프로그램을 위해 내보낸 함수를 정의합니다.
//

#include "header.h"
#include "Dll.h"
#include "..\Lib\Lib.h"

// 내보낸 함수의 예제입니다.
DLL_API int DllAdd(int a, int b)
{
    return LibAdd(a, b);
}
