#include <stdio.h>

int main(){
	//khia bao bien
	int num;
	int sum=0;
	int i;
	//yeu cau nhap 5 so nguyen
	printf("nhpa 5 so nguyen:\n");
	for( i=0;i<5;i++){
		printf("nhap so thu %d:",i+1);
		scanf("%d",&num);
		//kiem tra xem phai so le khong
		if (num%2!=0){
			sum+=num;
		}
	}
	//tong cac so le 
	printf ("tong cac so le la :%d\n",sum);
	
	return 0;
}
	
