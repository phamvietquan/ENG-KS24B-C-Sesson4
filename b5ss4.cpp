#include <stdio.h>

int main(){
	int a ;
	int b ;
	int c ;
	printf("Moi ban nhap vao so nguyen a  ");
	scanf("%d", &a );
	printf("Moi ban nhap vao so nguyen b  ");
	scanf("%d", &b );
		printf("Moi ban nhap vao so nguyen c  ");
	scanf("%d", &c );
	if(b>c&&c>a){
		printf("So %d ban nhap nam trong khoang %d va %d", c, b, a );
	}else {
		printf("So %d ban nhap khong nam trong khoang %d va %d", c, b, a );
	}
	
	return 0;
}
