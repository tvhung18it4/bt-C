#include<stdio.h>
#include<conio.h>
#include<math.h>
int tong(int n){
	int S=0;
	for(int i=1;i<=n;i++){
		S=S+1;
	}
	return S;
}
float tongcan2(float n){
	float S=0;
	for(float i=1;i<=n;i++){
		S=S+sqrt(i);
	}
	return S;
}
int demso(int n){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(i%3==0){
			dem=dem+1;
		}
	}
	return dem;
}
int tinhtong(int n){
	int S=1,dau=-1;
	for(int i=2;i<=n;i++){
		if(i%2==1){
			S=S+i;
		}
		else {
			S=S+(dau*i);
		}
	}
	return S;
}
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	printf("tong 1 den n la = %d\n",tong(n));
	printf("tong can bac 2 la = %f\n",tongcan2(n));
	printf("dem so chia het cho 3 la = %d\n",demso(n));
	printf("tong cac so la = %d",tinhtong(n));
}
