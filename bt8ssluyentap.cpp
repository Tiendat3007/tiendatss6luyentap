#include <stdio.h>
#include <math.h>
int main() {
    float P, r, A, TienLai;
    int n;
    printf("Nhap so tien gui ngan hang ban dau: ");
    scanf("%f", &P);
    printf("Nhap lai suat thang (theo phan tram): ");
    scanf("%f", &r);
    printf("Nhap so thang gui: ");
    scanf("%d", &n);
    A = P * pow((1 + r / 100), n);
      TienLai = A - P;
    printf("Tien lai: %.3f\n", TienLai);
    printf("Tien nhan duoc: %.3f\n", A);

    return 0;
}

