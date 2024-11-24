#include <stdio.h>

int main(){
	int day;
	int month;
	int year;
	printf("Moi ban nhap vao ngay ");
	scanf("%d", &day);
	printf("Moi ban nhap vao thang ");
	scanf("%d", &month);
	printf("Moi ban nhap vao nam ");
	scanf("%d", &year);
		if((day>1 && day<31) && (month>1 && month<12) && year>1){
			printf("Ngay %d thang %d nam %d", day, month, year);
		}else {
			printf("Ngay Thang Nam ban nhap khong hop le");
		}
	
	return 0;
}


