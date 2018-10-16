#include<stdio.h>
#include<conio.h>
int tamgiac(int n){
	n;
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<=n;j++){
			if(j<=i) printf("* ");
			else printf (" ");
		}
		printf("\n");
	}
	return n;
}
int main(){
	int n;
	printf("Nhap canh tam giac: ");
	scanf("%d",&n);
	printf(" ",tamgiac(n));
}
