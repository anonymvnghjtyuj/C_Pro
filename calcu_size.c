#include<stdio.h>
#include<windows.h>
#include<string.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr = (int *)(&a + 1);
    int *b;

    printf("%d\n", *(ptr));
    system("pause");
    return 0;

//对于含有*和&的加减计算应该考虑是以字节的大小进行计算的。

}

