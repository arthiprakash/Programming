#include<stdio.h>
#include<conio.h>
main()
{
int n,temp,rev,rem;
printf("Enter the number");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
rem=temp%10;
rev=rev*10+rem;
temp/=10;
}
if(rev==n)
printf("The given %d is a Palindrome\n",n);
else
printf("%d is not a palindrome");
}
