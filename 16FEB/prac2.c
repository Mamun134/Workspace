#include<stdio.h>
float area (int ,int);
float per (int,int);
int main()
{
    int l,b;
    printf("Enter the length and breadth:");
    scanf("%d%d",&l,&b);
    printf("Area=%f\n",area(l,b));
    printf("Perimiter=%f\n",per(l,b));

 }
 float area (int l,int h)
 {
    return l*h;
 }
 float per (int l,int h)
 {
    return 2*(l+h);
 }