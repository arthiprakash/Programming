#include<stdio.h>
#include<conio.h>
main()
{
int i,sum=0,n;
printf("Enter the number of elements:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
sum=sum+i;
}
printf("The sum of %d is",sum);
getch();
}
