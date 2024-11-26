#include <stdio.h>

int main(){
	int num,i=1;
	printf("vui long nhap vao mot so nguyen: ");
	scanf("%d",&num);
	if(num){
		printf("cac uoc cua %d la:",num);
		num=abs(num);
		while(i<=num){
			if(num%i==0){
			    printf(" %d",i);
			}
		i++;
	}
	return 0;
	}
	printf("so 0 khong co uoc");
	return 0;
} 
