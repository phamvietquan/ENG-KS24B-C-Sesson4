#include <stdio.h>

int main(){
	int integer;
	printf(" Moi ban nhap vào so nguyen ");
	scanf("%d", &integer);
	if(integer % 2 == 0){
		printf(" so %d ban vua nhap la so chan", integer);
		
	}else{
		printf(" So %d ban vua nhap la so le", integer);
	}
	
	return 0;
}
