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
		int number=2,dem=0,n;
			printf("hay nhap so tu nhien :");
	scanf("%d",&n);
 while (dem < n) {
        if (check(number)) {
            printf("%d ", number);
            dem++;
        }
        number++;
    }
	return 0;
	}
