#include<stdio.h>
#include<conio.h>
int tinhCN(float dai, float rong)
{
	int S = dai*rong;
	return S;
	}
	int main(){
			int dai,rong;
			printf("Nhap dai= ");
			scanf("%d",&dai);
			printf("Nhap rong= ");
			scanf("%d",&rong);
			printf("dien tich la %d",tinhCN(dai,rong));
	}
