#include<stdio.h>
#include<conio.h>
int tinhgt(int n){
long i, gt = 1;
for(i=1;i<=n;i++){
gt = gt*i;

}
return gt; 
}
int main(){
int n;
printf("nhap n: ");
scanf("%d",&n);
printf("giai thua n la: %d ",tinhgt(n));
}
