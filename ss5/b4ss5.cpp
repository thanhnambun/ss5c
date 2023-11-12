#include <stdio.h> 
#include <math.h> 
int main(){
	int salary;
	printf("nhap so luong ");
	scanf("%d",&salary);
	switch (salary) {
		case 1:  case 2:  case 3: case 4: case 5:
		printf("so tien thue la %d \n so tien luong %f",salary*0.05,salary-(salary*0.05));
		break;
		case 6: case 7: case 8: case 9: case 10: 	 
		printf("so tien thue la %d \n so tien luong %f",salary*0.1,salary-(salary*0.1));
		break;
		case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18:
		printf("so tien thue la %d \n so tien luong %f",salary*0.15,salary-(salary*0.15));
		break;
		default :
			if(18<salary<32) {
			printf("so tien thue la %d \n so tien luong %f",salary*0.2,salary-(salary*0.2)); 
			}else{if(32<salary<80) {
				printf("so tien thue la %d \n so tien luong %f",salary*0.25,salary-(salary*0.25)); 
				}else{if(salary>80) {
				printf("so tien thue la %d \n so tien luong %f",salary*0.3,salary-(salary*0.3)); 
					}
					} 
				};
	}
}
