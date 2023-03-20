#include<stdio.h>

int a=10;
int main(){
static int a=1;
{
    static int a=2;
    {
        static int a=3;
    printf("%d",a);
    }
    printf("%d",a);
}
printf("%d",a);
return 0;


}
    

