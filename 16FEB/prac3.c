#include<stdio.h>
#include<math.h>
float subha(int,int,int);
int main(){
    int x,y,z;
    printf("Enter x:");
    scanf("%d",&x);
    printf("y and z:");
    scanf("%d%d",&y,&z);
    printf("Value =%d\n",subha(x,y,z));
    
}
float subha ( int p,int y,int z)

{
    
    int p;
    p=y+z;
    return power (p);
}