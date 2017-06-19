#include<stdio.h>
#include<conio.h>
main()
{
int a1,a2,a3;
printf("Enter the value for a1:\n");
scanf("%d",&a1);
printf("Enter the value for a2:\n");
scanf("%d",&a2);
printf("Enter the value for a3:\n");
scanf("%d",&a3);
if(a1>a2&&a1>a3)
{printf("a1 is greatest");
}
else if(a2>a1&&a2>a3)
{printf("a2 is greatest\n");
}
else{
printf("a3 is greatest");
}
getch();
}
