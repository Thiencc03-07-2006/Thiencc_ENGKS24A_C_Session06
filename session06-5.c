#include <stdio.h>

int main(){
	int month,year;
	printf("vui long nhap vao thang va nam\n");
	scanf("%d %d",&month,&year);
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		printf("co 31 ngay");
		return 0;
	}else if(month==4||month==6||month==9||month==11){
		printf("co 30 ngay");
		return 0;
	}else if(month==2){
		if(year%4==0&&year%100!=0||year%400==0){
		    printf("co 29 ngay");
		    return 0;
     	}else{
     		printf("co 28 ngay");
		    return 0;
		}
	}
	printf("gia tri khong hop le");
	return 0;
}
