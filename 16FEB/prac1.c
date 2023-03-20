#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
int a,b;
printf("Enter a and b:");
scanf("%d%d",&a,&b);
 printf("Add=%d\n",add(a,b));
  printf("SUB=%d\n",sub(a,b));
   printf("mul=%d\n",mul(a,b));
    printf("div=%d\n",div(a,b));
}
int add (int a,int b)
{
    return a+b;
    
}
int sub (int a,int b)
{
    return a-b;
}
int mul (int a,int b)
{
    return a*b;
}
int div (int a,int b)
{
    return a/b;
}

