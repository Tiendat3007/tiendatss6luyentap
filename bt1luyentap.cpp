#include<stdio.h>
int main(){
	int sum=0,number,i=1;
	printf("hay nhap 5 so nguyen\n");
	while(i<=5){
	
	printf("hay nhap so nguyen thu %d:",i);
	scanf("%d",&number);
	if(number %2 ==1){
		sum +=number;
	}
	i++;
}
	printf("tong cac so le da nhap la: %d",sum);
	return 0;
}
