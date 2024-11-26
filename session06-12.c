#include<stdio.h>

int main(){
	int n,fibonacciN=1,fibonacci2=1,save=0;
	printf("vui long nhap vao mot so nguyen duong: ");
	scanf("%d",&n);
	printf("day fibonacci:\n");
	if(n==1||n==2){
		while(n>0){
			printf("1\n");
			n--;
		}
	}else{
		printf("1\n1\n");
		while(n-2>0){
			save=fibonacciN;
			fibonacciN+=fibonacci2;
			fibonacci2=save;
			printf("%d\n",fibonacciN);
			n--;
		}
	}
	return 0;
}
