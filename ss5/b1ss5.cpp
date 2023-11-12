#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c;
	printf("nhap a \n nhap b \n nhap c \n");
	scanf("%d %d %d",&a,&b,&c);
	float denta = b*b-4*a*c;
	if(a=b=c==0) {
	 printf(" phuong trinh vo so nghiem");
	}else{			
		if(a==0){
		printf("phuong trinh co nghiem x= %d",-c/b);
		}else{
			if (denta>=0){
			printf("phuong trinh co nghiem x1 = %f",(-b - sqrt(denta))/2*a);
			printf("phuong trinh co nghiem x1 = %f",(-b - sqrt(denta))/2*a);
			}
			else{
			printf("phuong trinh vo nghiem");
			};
			}
			}
}
