#include<stdio.h>
int main(){
	int a=0,b=1,n,AB,i=0;
	printf("hay nhap so nguyen n: ");
	scanf("%d",&n);
	while(i<=n){
		if(i==0){
			printf("%d ",a);
			
		}else if(i==1){
			printf("%d ",b);
		}else{
			AB=a+b;
			printf("%d ",AB);
			a=b;
			b=AB;
			
			
		}
		i++;
	}
	return 0;
}
	
