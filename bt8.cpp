#include<stdio.h>
#include<conio.h>
void number(int list[100], int size, int max, int min){
	for (int i=0;i<size;i++){
		if(i==0){
			max=min=list[i];
		}
		else {
			if(max<list[i]){
				max = list[i];
			}
			if(min>list[i]){
				min = list[i];
			}
		}
	}
	printf("so lon nhat la: %d ",max);
	printf("\nso nho nhat la: %d ",min);
}
int main(){
	int n,a[n];
	int max,min;
	max=min=0;
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	number(a,n,max,min);
}
