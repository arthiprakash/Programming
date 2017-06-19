#include<stdio.h>
#include<conio.h>
main()
{
char b;
printf("Enter the character:");
scanf("%c",&b);
if(b=='a'||b=='A'||b=='e'||b=='E'||b=='i'||b=='I'||b=='o'||b=='O'||b=='u'||b=='U')
{printf("The character is vowel");
}
else
{printf("It is a constant");
}
getch();
}
