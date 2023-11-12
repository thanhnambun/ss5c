#include <stdio.h>
int main(){
	int minute;
	printf("nhap so phut ");
	scanf("%d",&minute);
	if (minute<=50) {
		printf("so tien dien thoai %d",minute*600+25000);	 
		}else{
	if(minute<=200) {
		printf("so tien dien thoai %d",(minute-50)*400+25000+600*50);
		}else{
	if(minute<=400) {
		printf("so tien dien thoai %d",(minute-200)*200+25000+600*50+400*150);
		}else{
	if(minute>400) {
		printf("so tien dien thoai %d",(minute-400)*100+25000+600*50+400*150+200*200);
		}
		}	
	}
	};
}
 
