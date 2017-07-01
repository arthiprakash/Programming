#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,i;
printf("Enter the value for a and b:\n");
scanf("%d%d",&a&b);
if(a>b)
c=b;
else
c=a;
for(i=c;i<=1;i--)
{
if(a%i===0&&b%i==0)
{
printf("The GCD of two numbers %d:",i);
break;
}
}
}
