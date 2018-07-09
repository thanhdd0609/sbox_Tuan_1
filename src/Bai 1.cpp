#include <stdio.h>
#include <conio.h>

int main()
{
 int a,b,c,t,n;
   printf("Nhap so nguyen n(gom 3 chu so): ");
    scanf("%d", &n);
    a = n/100;
    b = ((n%100)/10);
    c = n%10; 
   
 if(a<b){
 	t=a;
 	a=b;
 	b=t;
 }

 if(a<c){
 	t=a;
 	a=c;
 	c=t;
 }
 if(b<c){
 	t=b;
 	b=c;
 	c=t;
 }
 
 printf("3 so sap xep giam dan la :%d%d%d",a,b,c);
 return 0;
 
}
