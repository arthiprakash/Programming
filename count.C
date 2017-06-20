#include<stdio.h>
#include<conio.h>
main()
{
int count=0,n;
printf("Enter the number of elements:");
scanf("%d",&n);
while(n!=0)
{count++;
n/=10;
}
printf("No of digits in %d:", count);
}
