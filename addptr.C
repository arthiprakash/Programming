#include<stdio.h>
main()
{
int a,*b,*c;
printf("Enter the value for b:");
scanf("%d",&b);
printf("Enter the value for c:");
scanf("%d",&c);
a=*b+*c;
printf("The result is %d:",a);
getch();
}
