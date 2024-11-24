#include <stdio.h>

int main(){
	int integer;
	printf(" Moi ban nhap vao so nguyen ");
	scanf(" %d", &integer);
	if(integer % 3 == 0 && integer % 5 == 0){
		printf(" so %d ban vua nhap chia het cho 3 va 5", integer);
	}else if(integer % 3 == 0)	{
		printf(" so %d ban vua nhap chia het cho 3", integer);
	}else if(integer % 5 == 0){
		printf(" so %d ban vua nhap chia het cho 5", integer);
	}else{
		printf(" so %d ban vua nhap khong chia het cho 3 va 5", integer);
	}
	
	
	return 0;
	
}

