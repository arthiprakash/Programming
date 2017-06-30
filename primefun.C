#include<stdio.h>
#include<conio>
int prime(int)
main()
{
int n,p;
printf("Enter the number:");
scanf("%d",&n);
p=prime(n);
if(p==1)
printf("%d is a prime number",p);
else
printf("%d is not a prime number",p);
}
int prime(int a)
{
int i;
for(i=2;i<=a/2;i++)
{
if(a%i==0)
return 0;
}
}
