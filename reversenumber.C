#include<conio.h>
#include<conio.h>
main()
{
int n,r,rev=0;
printf("Enter the number:\n");
scanf("%d",&n);
while(n)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
printf("The reverse of number is %d",rev);
}
