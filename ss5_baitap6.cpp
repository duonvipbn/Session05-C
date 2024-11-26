#include <stdio.h>

int main() {
    float num1, num2;
    int choice;

    printf("Nhap so thu nhat: ");
    scanf("%f", &num1);
    printf("Nhap so thu hai: ");
    scanf("%f", &num2);

    do {
        printf("\nCALCULATOR\n");
        printf("1. tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("chon tu 1-5: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("tong 2 so: %.2f\n", num1 + num2);
                break;
            case 2:
                printf("Hieu 2 so: %.2f\n", num1 - num2);
                break;
            case 3:
                printf("Tich 2 so: %.2f\n", num1 * num2);
                break;
            case 4:
                printf("Thuong 2 so: %.2f\n", num1 / num2);
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("ban da chon sai yeu cau.\n");
        }
    } while (choice != 5);

    return 0;
}

