#include<stdio.h>
#include<conio.h>
int bt(int a, int b){
	int m = a*b;
	while(a != b){
		if(a>b){
			a = a-b;
		}
		else{
			b = b-a;
		}
	}
	printf("UCLN = %d", a);
	printf("\nBCNN = %d",m/a);
	return m;
}
int main(){
	int a,b;
	printf("Nhap a: ");
	scanf("%d",&a);
		printf("Nhap b: ");
	scanf("%d",&b);
	printf("",bt(a,b));
}
