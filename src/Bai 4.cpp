#include <stdio.h>
#include <conio.h>
int main ()
{
int h,i,j;
printf("Nhap chieu cao tam giac h = ");
scanf("%d",&h);
for(i=1;i<=h;i++)
{
for(j=1;j<=h-i;j++)
printf(" ");
for(j=1;j<=2*i-1;j++)
printf("*");
printf("\n");
}
getch();
return 0;
}
