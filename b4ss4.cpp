#include <stdio.h>

int main(){
	int month;
	printf(" Moi ban nhap vao so thang ");
	scanf("%d", &month);
	if( 1 & month>12){
		printf("Thang ban nhap khong hop le", month);
	}else if(month = 1, 3, 5, 7, 8, 10 ,12){
		printf("Thang ban vua nhap co 31 ngay", month);
	}else if(month = 11, 4, 6, 9){
		printf("Thang ban nhap co 30 ngay", month);
	}else{
		printf("Thang ban vua nhap cos 28 hoac 29 ngay (neu nam nhuan)", month);
	}
	
	return 0;
	
}
