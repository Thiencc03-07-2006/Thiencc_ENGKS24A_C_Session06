#include <stdio.h>

int main(){
	float money,interest,bank;
	int month;
	printf("vui long nhap vao tien gui, lai hang thang,so thang:\n");
	scanf("%f %f %d",&bank,&interest,&month);
	money=bank;
	while(month>0){
		month--;
		money=money*(1+0.01*interest);
	}
	printf("tienlai: %.3f\ntien nhan duoc: %.3f",money-bank,money);
	return 0;
}
