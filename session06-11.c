#include<stdio.h>

int main(){
	int num=1,i=2,check=0,n;
	printf("vui long nhap vao so: ");
	scanf("%d",&n);
	while(n>0){
		check=0;
		i=2;
		num++;
		if(num>1){
			while(i<=num){
				if(num%i==0){
					check++;
				}
			i++;
			}
		}else{
			check=2;
		}
		if(check>1){
			continue; 
		}
		printf("%d\n",num);
		n--;
		}
	return 0;
}
