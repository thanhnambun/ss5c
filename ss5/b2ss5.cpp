#include <stdio.h>
int main(){
	int a;
	printf("nhap tong doanh thu ");
	scanf("%d",&a);
	if(a<=100) {
		printf("tien hoa hong = %f ",0.05*a); 
		}else{
			if(100<a<=300) {
				printf("tien hoa hong = %f ",0.1*a); 
			}
		else {
				printf("tien hoa hong = %f ",0.2*a); 
			};
		}
} 
