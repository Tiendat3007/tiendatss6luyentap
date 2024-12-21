#include <stdio.h>
#include<math.h>

int main() {
	int a,b,c;
	float x1,x2,denlta;
	printf("hay nhap a");
	scanf("%d",&a);
	printf( "hay nhap b");
	scanf("%d",&b);
	printf("hay nhap c");
	scanf("%d",&c);
		denlta=(b*b)-(4*a*c);
		
				if(denlta>0){
			x1=(-b+ sqrt(denlta))/2*a;
			x2=(-b- sqrt(denlta))/2*a;
			printf("phuong trinh co 2 nghiem \nx1 =%.2f\n x2 = %.2f",x1,x2);
		}else if(denlta==0){
			x1= -(b/(2*a));
			printf("phuong trinh co nghiem kep x1= x2= %.2f",x1);
		}else{
			printf("phuong trinh vo nghiem");
		}
	printf("\n%.2f",denlta);
	return 0;
}


