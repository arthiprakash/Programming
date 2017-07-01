#include<stdio.h>
#include<conio.h>
main()
{
int i,a=0,n;
printf("Enter the number:\n");
scanf("%d",&n);
for(i=1,i<n;i++)
{
a=a+i;
}
printf("The required output for %d is:",a);
getch();
}
