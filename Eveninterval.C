#include<stdio.h>
#include<conio.h>
main()
{
int a,b,i;
printf("Enter the lowest range:");
scanf("%d",&a);
printf("Enter the Upper limit:");
scanf("%d",&b);
for(i>a;i<=b;i++)
{
if(i%2==0)
printf("The result is %d",i);
}
}
