#include <stdio.h>

int main() {
    char c;
    int check = 1;
    printf("Vui long nhap mat khau: ");
    char pass[] = "12345";
    int i = 0;
    while ((c = getchar()) != '\n' && i < 5) {
        if (c != pass[i]) {
            check = 0;
            break;
        }
        i++;
    }
    if (check == 1) {
        printf("Mat khau dung!\n");
    } else {
        printf("Mat khau sai!\n");
    }
    
    return 0;
}

