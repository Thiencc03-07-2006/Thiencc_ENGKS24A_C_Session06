#include<stdio.h>

int main(){
	int num,i=2,check=0;
	printf("vui long nhap vao so: ");
	scanf("%d",&num);
	if(num>1){
		while(i<=num){
			if(num%i==0){
				check++;
			}
		i++;
		}
	}else{
		check=2;
	};
	if(check>1){
	printf("do khong phai so nguyen to");
	return 0;
	}
	printf("do la so nguyen to");
	return 0;
}
