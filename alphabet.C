#include<stdio.h>
#include<conio.h>
main()
{
char c;
printf("Enter the input:\n");
scanf("%c",&c);
if(c>=65&&c<=90||c>=97&&c<=122)
printf("The input is an alphabet\n");
else
printf("The input is not an alphabet");
getch();
}
