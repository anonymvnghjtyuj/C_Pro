#include<windows.h>
#include<stdio.h>
#include<strings.h>

/*
void print(int a,int b=1,char c='f')//这种写法与python中函数默认值的写法差不多，都是在函数中给几个参数赋了值
{

     printf("hello world\n");
     printf("a+b=%d\n",(a+b));

}

int main()
{

   print(3);
   system("pause");
   return 0;

}
*/

/*
数组可以直接修改字符串的值，是因为字符串是直接复制到数组中的，就是数组原本在常量区，后来复制到数组中的就不是常量了
相当于存储在临时区，而指针不然，指针存储的是字符串的地址，通过这个地址指向的是常量区的字符串，因此无法修改。
*/


/*
int main()
{

   char array[10];  
   array[10]='1';  //当数值的一个下标单独被列出来，他就不再代表一个数组，而只代表一个元素，以左为例
   printf("%c\n",array[10]);
   system("pause");
   return 0;

}
*/


/*

#define N 9
int x[N];
int count=0;

void dump()
{

   int i=0;
   for(i=0;i<N;i++)
   {
      printf("%d",x[i]);
   }
   printf("\n");

}

void swap(int a,int b)
{

   int t=x[a];
   x[a]=x[b];
   x[b]=t;

}

void run(int n)
{

   int i;
   if(N-1==n)
   {

      dump();
      count++;
      return;

   }

   for(i=n;i<N;i++)
   {

      swap(n,i);
      run(n+1);
      swap(n,i);

   }
}
int main()
{
   
   int i;
   for(i=0;i<N;i++)
   {
      x[i]=i+1;
   }
   run(0);
   printf("Total:%d\n",count);
  
   system("pause");
   return 0;

}
*/

//整数取余用% 浮点数取余用fmod（x，y）

/*
int main()
{

 int i;
 char *str[]={"abc","abcdef","abbd"};
 
 for(int i=0;i<3;i++)
 {
  printf("%s\n",str[i]);  //想不出为什么*str[i]不可以呢
 }

  system("pause");
  return 0;
   
}
*/

/*
int sizef_array(int arr[])
{
   return sizeof(arr);
}

int main()
{

   int array[10]={0};
   
   
   printf("%d\n",sizef_array(array));
   printf("%d\n",sizeof(array));

   system("pause");
   return 0;

}
*/

/*
int main()
{
   int i,j=0,k=0,a=0,b=0,n;
   int x[100],y[100];
   int nums[100];

   printf("please input your n:\n");
   scanf("%d",&n);

   printf("please input your numbers:\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&nums[i]);
   }
   
  
  for(i=0;i<n/2;i++)
  {
   x[i]=nums[i];
   y[i]=nums[i+n/2];
  }
  
   for(i=0;i<n;i++)
   {
      if(i%2==0)
      {
         nums[i]=x[j];
         ++j;
      }
      else
      {
         nums[i]=y[k];
         ++k;
      }
   }
   printf("the numbers is:\n");

   for(i=0;i<n;i++)
   {
      printf("%d\n",nums[i]);
   }
  
   system("pause");
   return 0;

}
*/


