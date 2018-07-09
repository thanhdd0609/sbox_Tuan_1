#include <stdio.h>
#include <conio.h>
#include <string.h>
int demkthoa(char s[])
{
       int i,dem=0;
       for (i=0;i<strlen(s);i++)
        if ( s[i]>='A' && s[i]<='Z' )
                     dem++;
       return dem;
}
int demktthuong(char s[])
{
       int i,dem=0;
       for (i=0;i<strlen(s);i++)
        if ( s[i]>='a' && s[i]<='z' )
                     dem++;
       return dem;
}
int main()
{
    char s[500];
    gets(s);
    printf("So ki tu hoa la: %d",demkthoa(s));
    printf("\n");
    printf("So ki tu thuong la: %d",demktthuong(s));
 	return 0;
    getch();
}

