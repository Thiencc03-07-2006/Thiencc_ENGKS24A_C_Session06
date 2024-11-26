#include<stdio.h>

int main(){
	int day,month;
	printf("vui long nhap vao ngay va thang:\n");
	scanf("%d %d",&day,&month);
	printf("do la cung ");
	if((month==3&&day>=21)||(month==4&&day<=20)){
		printf("Bach Duong");
	}else if((month==4&&day>=21)||(month==5&&day<=20)){
		printf("Kim Nguu");
	}else if((month==5&&day>=21)||(month==6&&day<=21)){
		printf("Song Tu");
	}else if((month==6&&day>=22)||(month==7&&day<=22)){
		printf("Cu Giai");
	}else if((month==7&&day>=23)||(month==8&&day<=22)){
		printf("Su Tu");
	}else if((month==8&&day>=23)||(month==9&&day<=22)){
		printf("Xu Nu");
	}else if((month==9&&day>=23)||(month==10&&day<=23)){
		printf("Thien Binh");
	}else if((month==10&&day>=24)||(month==11&&day<=22)){
		printf("Bo Cap");
	}else if((month==11&&day>=23)||(month==12&&day<=21)){
		printf("Nhan Ma");
	}else if((month==12&&day>=22)||(month==1&&day<=19)){
		printf("Ma Ket");
	}else if((month==1&&day>=20)||(month==2&&day<=18)){
		printf("Bao Binh");
	}else if((month==2&&day>=19&&day<=29)||(month==3&&day<=20)){
		printf("Song Ngu");
	}else{
		printf("khong hop le");
	}
	return 0;
	}
