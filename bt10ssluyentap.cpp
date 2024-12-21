#include <stdio.h>
int check(int n) {
	if(n<=1){
      return 0;
	}
	for(int i = 2;i*i<=n;i++){
		if(n%i==0){
		return 0;
	}
	}
	return 1;
}
	int main(){
		int n;
			printf("hay nhap so tu nhien can kiem tra:");
	scanf("%d",&n);
	if(check(n)){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khongphai la so nguyen to",n);
	}
	return 0;
	}
