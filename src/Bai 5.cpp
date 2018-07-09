#include <stdio.h>

int main() {

    int ngay, thang, nam;

    printf("Nhap ngay: ");
	scanf("%d",&ngay);
	
	printf("Nhap thang: ");
    scanf("%d",&thang);
    
    printf("Nhap nam: ");
    scanf("%d",&nam);

    switch(thang) {

    case 1: case 3: case 5: case 7: case 8: case 10:  case 12:

                if( ngay>0 && ngay<=31){

                printf("Ngay %d thang %d nam %d hop le\n",ngay,thang,nam);

                break;

                }

              else

               { printf("Ngay %d thang %d nam %d ko hop le\n",ngay,thang,nam);

                break;

                }

    case 4: case 6: case 9: case 11:

                if( ngay<=30 && ngay>0){

                printf("Ngay %d thang %d nam %d hop le\n",ngay,thang,nam);

                break;

                }

                        else{ printf("Ngay %d thang %d nam %d ko hop le\n",ngay,thang,nam);

                break;

                }

    case 2:
				if(nam%4==0&&nam%100!=0||nam%400==0){
                if( ngay <=29 && ngay > 0){

                printf("Ngay %d thang %d nam %d hop le\n",ngay,thang,nam);

                break;

                }else{ printf("Ngay %d thang %d nam %d ko hop le\n",ngay,thang,nam);

                break;
				}
                }else {
                	if( ngay <=28 && ngay > 0){

                printf("Ngay %d thang %d nam %d hop le\n",ngay,thang,nam);

                break;

                }else{
				printf("Ngay %d thang %d nam %d ko hop le\n",ngay,thang,nam);

                break;

    default: printf("Ngay %d thang %d nam ko hop le\n",ngay,thang,nam);
    
   	break;
    }
    }
    }
	if(nam%4==0&&nam%100!=0||nam%400==0)
	printf("Nam nhuan \n");
	else
	printf("Khong phai nam nhuan \n");
}
