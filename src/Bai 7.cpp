#include <stdio.h>

int main(){
    int a,b,uc,bc;
    printf("Nhap a = ");
    scanf("%d",&a);
    printf("Nhap b = ");
    scanf("%d",&b);
    for (uc=a;uc>=1;uc--){
        if (a%uc==0 && b%uc==0){
            printf("UCLN = %d\n",uc);
            break;
        }
    }
    for (bc=a;bc<=a*b;bc++){
        if (bc%a==0 && bc%b==0){
            printf("BCNN = %d\n",bc);
            break;
        }
    }
    return 0;
}
