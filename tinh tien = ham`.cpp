#include<stdio.h>
#include<conio.h>
double tinhtien(double tt)
{
	double tien=0.0;
	if(tt<=50){
		tien=tt*1000;
	}
	else if((tt>50)&&(tt<100)){
		tien=tt*1500;
	}
	else {
		tien=tt*2000;
	}
	return tien;
}
int main(){
	double tieuthu;
	printf("Nhap tieu thu= ");
	scanf("%lf",&tieuthu);
	printf("tien dien la %lf",tinhtien(tieuthu));
}
