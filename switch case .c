#include<stdio.h>
void main()
{
int option;
printf("the food items available are:\n");
printf("1.panipuri \n");
printf("2.chicken biryani \n");
printf("3.cotton candy \n");
printf("4.ice cream \n");
printf("please enter the option to select the food item \n");
scanf("%d",&option);
switch(option)
{
case 1:
{
printf("panipuri is ordered \n");
}break;
case 2:
{
printf("chicken biryani is ordered \n");
}break;
case 3:
{
printf("cotton candy is ordered \n");
}break;
case 4:
{
printf("ice cream is ordered \n");
}break;
default:
{
printf("please select the valid option \n");
}
}
}