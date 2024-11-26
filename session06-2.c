#include <stdio.h>

int main(){
	int num1,num2,num3,num4,num5,count=0;
	printf("vui long nhap vao 5 so nguyen: \n");
	scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
	if(num1%2==0){
		count++;
	}
	if(num2%2==0){
		count++;
	}
	if(num3%2==0){
		count++;
	}
	if(num4%2==0){
		count++;
	}
	if(num5%2==0){
		count++;
	}
	printf("co %d so chan va %d so le",count,5-count);
	return 0;
} 
