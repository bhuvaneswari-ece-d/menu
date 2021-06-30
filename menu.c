#include<stdio.h>
main()
{
int num;
printf("enter the num from 1 to 5");
scanf("%d",&num);
switch(num)
{
case 1:printf("pizza\nprice-Rs239\n");
break;
case 2:printf("burger\nprice-Rs129\n");
break;
case 3:printf("pasta\nprice-Rs179\n");
break;
case 4:printf("french fries\nprice-Rs99\n");
break;
case 5:printf("sandwich\nprice-Rs149\n");
break;
default:printf("you have entered the wrong choice");
}
}
