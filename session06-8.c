#include <stdio.h>
#include <math.h> 

int main(){
	int num=1;
	while(num<100||num>999){
		system("cls");
		printf("vui long nhap vao 1 so co 3 chu so: ");
		scanf("%d",&num);
	}
	if(num==pow(num%10,3)+pow((num/10)%10,3)+pow(num/100,3)){
		printf("do la so armstrong");
	}else{
		printf("do khong phai la so armstrong");
	}
	return 0;
}
