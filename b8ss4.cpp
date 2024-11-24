#include <stdio.h>

int main(){
	int a, b, c;
	printf("Moi ban nhap vao ba canh cua tam giac ");
	scanf("%d", &a);
	printf("Moi ban nhap vao ba canh cua tam giac ");
	scanf("%d", &b);
	printf("Moi ban nhap vao ba canh cua tam giac ");
	scanf("%d", &c);
	if(a>0 && b>0 && c>0 && (a+b>c) && (a+c>b) && (b+c>a) && (a-b<c) && (a-c<b) && (b-c<a) ){
		printf("So ban nhap la ba canh cua tam giac");
	}else{
		printf("So ban nhap khong phai ba canh cua tam giac");
	}
	return 0;
}
