#include<stdio.h>
#include<conio.h>
main()
{
int i=0,sum=0,n;
printf("Enter the number of elements:\n");
scanf("%d",&n);
while(i<n)
{
sum=sum+i;
}
printf("The sum of %d is",sum);
getch();
}
