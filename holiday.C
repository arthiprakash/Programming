#include<stdio.h>
#include<conio.h>
main()
{
int day;
printf("Enter the day:");
Scanf("%d",&day);
switch(day)
{
case Monday:
printf("True");
break;
case tuesday:
printf("True");
break;
case Wednesday:
printf("True");
break;
case Thursday:
printf("True");
break;
case Friday:
printf("True");
break;
case Saturday:
printf("False");
break;
case Sunday:
printf("False");
break;
default:
printf("Invalid Entry");
}
getch();
}
