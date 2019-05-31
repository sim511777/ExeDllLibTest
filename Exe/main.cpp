#include <stdio.h>
#include "..\Dll\Dll.h"

int ExeAdd(int a, int b) {
   return DllAdd(a, b);
}

int main() {
   int res = ExeAdd(3, 4);
   printf("ExeAdd(B3, 4) = %d\n", res);
   getchar();
   return 0;
}