#include <stdio.h>

int main() {
    int num = 42;  
    int input;
    do {
        printf("nhap mot so bat ky: ");
        scanf("%d", &input);
        
        if (input != num) {
            printf("ban nhap sai roi\n");
        }
    } while (input != num);
    printf("ban da nhap dung roi %d.\n", num); 
    return 0;
}
