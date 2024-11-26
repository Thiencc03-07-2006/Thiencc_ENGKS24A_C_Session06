#include <stdio.h>

int main(){
	int num1,num2,num3,num4,num5,sum;
	printf("vui long nhap vao 5 so nguyen: \n");
	scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
	if(num1%2!=0){
		sum+=num1;
	}
	if(num2%2!=0){
		sum+=num2;
	}
	if(num3%2!=0){
		sum+=num3;
	}
	if(num4%2!=0){
		sum+=num4;
	}
	if(num5%2!=0){
		sum+=num5;
	}
	printf("tong cac so le:%d",sum);
} 
