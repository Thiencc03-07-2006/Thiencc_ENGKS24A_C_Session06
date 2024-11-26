#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,x1,x2,check=0;//1 2;2 1;3 vs;4 vo
	printf("vui long nhap vao 3 so a,b,c");
	scanf("%f %f %f",&a,&b,&c);
	if(a==0){
		if(b==0){
			if(c==0){
				check=3;
			}else{
				check=4;
			}
		}else{
			x1=-c/b;
			check=2;
		}
	}else{
		int delta=b*b-4*a*c;
		if(delta<0){
			check=4;
		}else if(delta==0){
			x1=-b/(2*a);
			check=2;
		}else{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			check=1;
		}
	}
	if(check==1){
		printf("phuong trinh co 2 nghiem la %f va %f",x1,x2);
	}else if(check==2){
		printf("phuong trinh co 1 nghiem la %f",x1);
	}else if(check==3){
		printf("phuong trinh vo so nghiem");
	}else{
		printf("phuong trinh vo nghiem");
	}
}
