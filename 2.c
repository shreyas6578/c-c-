#include<stdio.h>
int main()
{
int a,b,temp;
printf(" Enter two numbers:");
scanf("%d%d",&a,&b);
printf(" \nThe original value of a,b is :%d\t%d",a,b);
temp=a;
a=b;
b=temp;
printf("\nThe value after swapping is:%d\t%d",a,b);
return 0;
}
