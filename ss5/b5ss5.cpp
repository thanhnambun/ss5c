#include <stdio.h>
int main(){
	int day, month;
	printf("nhap ngay thang ");
	scanf("%d %d",&day,&month);
	if (day>21 && month==3 ||day<20 && month==4) {
		printf("cung bach duong");  
	};
	if (day>21 && month==4 ||day<20 && month==5) {
		printf("cung kim nguu "); 
	};
	if (day>21 && month==5 ||day<21 && month==6) {
		printf("cung song tu"); 
	};
	if (day>22 && month==6 ||day<22 && month==7) {
		printf("cung cu giai "); 
	};
	if (day>23 && month==7 ||day<22 && month==8) {
		printf("cung su tu"); 
	};
	if (day>23 && month==8 ||day<22 && month==9) {
		printf("cung xu nu "); 
	};
	if (day>23 && month==9 ||day<23 && month==10) {
		printf("cung thien binh"); 
	};
	if (day>24 && month==10 ||day<22 && month==11) {
		printf("cung bo cap"); 
	};
	if (day>23 && month==11 ||day<21 && month==12) {
		printf("cung nhan ma"); 
	};
	if (day>22 && month==12 ||day<19 && month==1) {
		printf("cung bach duong"); 
	};
	if (day>20 && month==1 ||day<18 && month==2) {
		printf("cung bach duong"); 
	};
	if (day>19 && month==2 ||day<20 && month==3) {
		printf("cung bach duong"); 
	}; 
}

