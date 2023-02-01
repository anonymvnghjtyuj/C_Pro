#include<stdio.h>
#include<windows.h>

#define DEBUG 1

int main()
{
#ifdef DEBUG

    printf("hello world\n");

#endif 


    
    printf("see you again\n");

    system("pause");
    return 0;
}