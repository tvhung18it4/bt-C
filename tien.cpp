#include<stdio.h>
#include<conio.h>
main(){
	int tiengoc,kihan;
	float laisuat,tien;
	printf("Nhap tien goc: ");
	scanf("%d",&tiengoc);
	printf("Nhap ki han: ");
	scanf("%d",&kihan);
	printf("Nhap lai suat: ");
	scanf("%f",&laisuat);
	tien=(kihan*tiengoc*laisuat)/100;
	printf("So tien nhan duoc la: %f", tien);
}
