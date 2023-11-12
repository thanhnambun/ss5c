#include <stdio.h>
int main(){
	int numberofminutes;
	printf("nhap so phut  ");
	scanf("%d",numberofminutes);
	if(numberofminutes<=50) {
		printf("so tien dien thoai la %f ",numberofminutes*600+25000);
		}else{if(numberofminutes<200) {
				printf("so tien dien thoai la %f ",(numberofminutes-50)*400+25000+600*500);
				}else{if(numberofminutes<200) {printf("so tien dien thoai la %f ",(numberofminutes-150)
					}
				}
			}
}  
