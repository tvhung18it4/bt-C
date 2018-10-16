#include<stdio.h>
#include<conio.h>
main(){
	double doanhthu,hoahong;
	char loai;
	printf("Nhap doanh thu= ");
	scanf("%lf",&doanhthu);
	if(doanhthu<=10000){
	hoahong=doanhthu*0.05;
	printf("tien hoa hong la %lf",hoahong);}
	else 
	if(doanhthu=='A'){
	hoahong=doanhthu*0.1;
	printf("tien hoa hong la %lf",hoahong);}
	else{
	hoahong=doanhthu*0.8;
	printf("tien hoa hong la %lf",hoahong);}
}
