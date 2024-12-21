#include <stdio.h>

int isLeapYear(int year) {
    // kiem tra co phai nam nhuan hay khong
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; 
    }
    //neu nam nhuan thi tra ve ket qau;;
    return 0;
}

int main() {
    int year, month, days;
    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("Nhap thang: ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("Thang khong hop le!\n");
        return 1;
    }
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31; 
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if (isLeapYear(year)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
    }
    printf("Thang %d trong nam %d co %d ngay.\n", month, year, days);

    return 0;
}

