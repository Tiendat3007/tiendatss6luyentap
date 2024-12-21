#include<stdio.h>
#include<math.h>
int main(){
	int n,sum,so1,so2,so3;
	for(n=100;n<=999;n++){
	//lay tung so tong 3 so
	   so1 = n / 100;
    so2 = (n / 10) % 10;
    so3 = n % 10;
    //tong lap phuong 3 so
	sum= pow(so1, 3) + pow(so2, 3) +pow(so3, 3);     
	if(sum==n){
		printf("%d\n",n);
	}
}
	return 0;
}
