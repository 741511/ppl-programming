#include<stdio.h>
#include<conio.h>
int sum(int a, int b)
{
    return a+b;
}

main()
{
int s;
s=sum(1,2);
printf("The sum is %d", s);
getch();
return 0;
}