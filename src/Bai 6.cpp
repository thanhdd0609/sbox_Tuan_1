#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
void chuanhoachuoi(char[]);
int main()
{
	char a[100];
   printf("Nhap vao chuoi: ");
   gets(a);
   chuanhoachuoi(a);
   printf("Chuoi sau khi chuan hoa: %s",a);
   getch();
   return 0;
}
void chuanhoachuoi(char a[])
{
 	while( a[0] == ' ' ) strcpy(&a[0], &a[1]);
	while( a[ strlen(a)-1 ] == ' ') a[ strlen(a)-1 ] = '\0';
	int i;
    for(i = 0; i < strlen(a); i++) {
        if(( a[i] == ' ' && a[i+1] == ' ')||( a[i] == ' ' && a[i+1] == '.')||( a[i] == ' ' && a[i+1] == ','))
        {
            strcpy(&a[i], &a[i+1]);
            i--;
        }
    }
}
