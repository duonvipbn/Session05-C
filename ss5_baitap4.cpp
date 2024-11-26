#include <stdio.h>

int main() {
    int n;
    printf("nhap so nguyen duong yu 1 den 10: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 10) {
    	printf("bang cuu chuong %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    }else{
    	 printf("so ban nhap khong dung.\n");
	}

    return 0;
}
