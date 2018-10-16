#include<stdio.h>
#include<conio.h>
float tong(float n){
	double S=0;
	for(int i=1;i<=n;i++){
		S=S+1./i;
	}
	return S;
}
int main(){
	float n;
	printf("nhap n: ");
	scanf("%f",&n);
	printf("tong nghich dao cua n so nguyen dau tien la %f",tong(n));
}
