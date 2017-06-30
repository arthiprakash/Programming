#include<stdio.h>
#include<conio.h>
main()
{
int maxr,minr,i,r,temp,sum;
printf("Enter the minimum range:\n");
scanf("%d",&minr);
printf("Enter the maximum range:\n");
scanf("%d",maxr);
for(i=minr;i<=maxr;i++)
{
temp=i;
sum=0;
while(temp!=0)
{
r=temp%10;
temp=temp/10;
sum=sum+(r^3);
  if(sum==i)
  printf("%d",i);
  }}
  }
