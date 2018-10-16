#include<stdio.h>
#include<conio.h>
int tinhtong(int n){
	int S=0;
	for(int i=1;i<=n;i++){
		S=S+(i*i*i);
	}
	return S;
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
    printf("tong bac 3 cua n so nguyen dau tien la: %d",tinhtong(n));
	
}
