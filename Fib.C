#include<stdio.h>
#include<conio.h>
main()
{
int i,a,b,n,fib;
printf("Enter the value:\n");
scanf("%d",&n);
i=2;
while(i<n){
fib=a+b;
a=b;
b=fib;
printf("The fibonacci series is %d",b);
}
}
