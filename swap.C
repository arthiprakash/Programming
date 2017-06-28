#include<stdio.h>
#include<conio.h>
main()
{
int a,b,t;
printf("Enter the value of a:\n");
scanf("%d",&a);
printf("Enter the value of b:\n");
scanf("%d",&b);
t=a;
a=b;
b=t;
printf("The swapped value is %d/n%d/n",a,b);
}
