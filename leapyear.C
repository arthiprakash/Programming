#include<stdio.h>
#include<conio.h>
main()
{
int yr;
printf("Enter the year:\n");
scanf("%d",&yr);
if(yr%4==0 || yr%400==0){
printf("The year %d is Leap Year\n");
}
else {
printf("The year %d is not a Leap year\n");
}
getch();
}
