#include<stdio.h>
#include<conio.h>
int dem(int n){
	n;
	for(int i=2;i<=n;i++){
			if(n%i==0){
				printf("%d",i);
			}
			printf(" ");
	}
	return n;
}
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("cac uoc cua so la %d",dem(n));
	
}
