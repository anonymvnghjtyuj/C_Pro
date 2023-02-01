#include<stdio.h>
#include<windows.h>

int main()
{
	int receive_sta=0,i=0,len=0;
	int  a[200];
	printf("please input your numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[receive_sta&0x3fff]);
		receive_sta++;
	}

    //len=receive_sta&0x3f;

	printf("your numbers is %s \n",a);
     
    
   system("pause");

   return 0;
}


