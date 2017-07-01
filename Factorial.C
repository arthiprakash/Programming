#include<stdio.h>
#include<conio.h>
main()
{
int i,factorial=1,n;
printf("Enter the number:\n");
scanf("%d",&n);
for(i=1;i<n;i++)
{
factorial=factorial*i;
}
printf("the output is %d:",factorial);
}
