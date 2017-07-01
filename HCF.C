#include<stdio.h>
#include<conio.h>
int HCF(int a, int b);
main()
{
int a=360,b=60;
printf("Enter two values:");
scanf("%d%d",&a,&b);
printf("HCF of given numbers are %d",HCD(a,b));
}
int hcf(int a,int b)
if(b!=0)
return hcf(b,a%b);
else
return a;
}
