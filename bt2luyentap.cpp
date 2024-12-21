#include<stdio.h>
int main(){
	int chan=0,le=0,number,i=1;
	printf("hay nhap 5 so nguyen\n");
	while(i<=5){
	printf("hay nhap so nguyen thu %d:",i);
	scanf("%d",&number);
	if(number %2 ==0){
		chan =chan+1;
	}else {
		le=le+1;
	}
	i++;
}
	printf("ban da nhap: %d so le\n",le);
		printf("ban da nhap: %d so chan\n",chan);

	return 0;
}
