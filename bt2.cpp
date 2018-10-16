#include<stdio.h>
#include<conio.h>
int hcn(int n,int m){
	n,m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			printf("* ");
		}
		printf("\n");
	}
	return n,m;
}
int main(){
	int n,m;
	printf("nhap hang: ");
	scanf("%d",&n);
	printf("nhap cot: ");
	scanf("%d",&m);
	printf(" ",hcn(n,m));
}
