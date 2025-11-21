#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the a value \n");
scanf("%d",&a);
printf("enter the b value \n");
scanf("%d",&b);
printf("enter the c value \n");
scanf("%d",&c);
if(a>b&&a>c)
{
printf("%d is big value\n",a);
if(b>c)
{
printf("%d is medium value \n",b);
printf("%d is small value \n");
}
else
{
printf("%d is medium value \n",c);
printf("%d is small value \n",b);
}
}
else if(b>a&&b>c)
{
printf("%d is big value \n",b);
if(a>c)
{
printf("%d is medium value \n",a);
printf("%d is small value \n",c);
}
else
{
printf("%d is medium \n",c);
printf("%d is small \n",a);
}
}
else
{
printf("%d is big value \n",c);
if(a>b)
{
printf("%d is medium value \n",a);
printf("%d is small value \n",b);
}
else
{
printf("%d is medium value \n",b);
printf("%d is small value \n",a);
}
}
}