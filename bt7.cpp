#include<stdio.h>
#include<conio.h>
int tongsole(int n){
	int S=0;
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			S=S+i*i;
		}
	}
	return S;
}
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("tong cac so le tu 1 den n la: %d",tongsole(n));
}
