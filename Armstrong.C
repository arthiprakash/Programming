#include<stdio.h>
#include<conio.h>
main()
{
int sum=0,temp,n,r;
printf("Enter the number:\n");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
r=n%10;
n=n/10;
sum=sum+(r^3);
}
if(sum==temp)
printf("%d is armstrong number");
else 
printf("%d is not an armstrong number");
}
