#include<stdio.h>
#include<conio.h>
main()
{
int i,n;
printf("Enter the number of multiplication table:");
scanf("%d",n);
for(i=1;i<10;i++){
printf("%d*%d=%d",n,i,(n*i));
}
getch();
}
