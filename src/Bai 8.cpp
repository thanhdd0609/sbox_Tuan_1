#include<stdio.h> 
#include<conio.h> 
#include<string.h> 
int main () 
{ 
     char xau[100]; 
     printf("Nhap xau : "); 
     gets(xau); 
     printf("Chuoi sau khi dao nguoc : %s ",strrev(xau)); 
     getch();
	 return 0; 
     }  
