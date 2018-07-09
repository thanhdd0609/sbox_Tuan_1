#include <stdio.h>
#include <conio.h>
 
int main()
{
    float Totalm;
    float Cost = 0;
    printf("\n Nhap vao so m: ");
    scanf("%f", &Totalm);
    if(Totalm <= 1000)
    {
        Cost = 10000;
    }
    else if(Totalm <= 30000 && Totalm > 1000)
    {
        Cost = (Totalm - 1000)*7.5 + 1*10000;
    }
    else
    {
        Cost = 1*10000 + 29*7500 + (Totalm - 30000)*8;
    }
    printf("\n So tien phai tra: %0.3f VND", Cost/1000);
    getch();
    return 0;
}
