#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("nhap so nguyen duong: ");
    scanf("%d", &n);
    
    if (n > 0) {
    	for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("tong cac gia tri tu 1 den %d la: %d\n", n, sum);
    }else{
    printf("khong phai so nguyen duong.\n");
	}

    return 0;
}
