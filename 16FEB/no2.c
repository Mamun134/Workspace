#include<stdio.h>

int main()
{
    count();
    count();
    count();
    count();

}
 int count()
{
     int count =0;
     count++;
    printf("%d\n",count);
    printf("Address=%d\n",&count);
}