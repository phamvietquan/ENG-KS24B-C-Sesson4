#include <stdio.h>

int main(){
	int year;
	printf("Moi ban nhap vao nam ");
	scanf("%d", &year);
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		
		printf("Nam %d ban nhap la nam nhuan", year);
	
	}else{
		
		printf("Nam %d ban nhap khong phai nam nhuan", year);
	}
	
	return 0;
	
}
