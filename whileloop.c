#include<stdio.h>
void main()
{
int a;
printf("enter the number \n");
scanf("%d",&a);
while(a!=0)
{
int digit=a%10;
printf("%d \n",digit);
a=a/10;
}
}