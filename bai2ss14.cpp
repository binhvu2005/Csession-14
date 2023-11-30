#include <stdio.h>
    void swap(int *a, int *b) {
    	printf("hieu 2 so truoc khi doi la:%d\n",*a-*b);
        int temp = *a;
        *a = *b;
        *b = temp;
        printf("Gia tri sau khi hoan doi: x = %d, y = %d\n", *a, *b);
    }
    
    int main() {
        int x, y;
        printf("Nhap gia tri cho bien x: ");
        scanf("%d", &x);
        printf("Nhap gia tri cho bien y: ");
        scanf("%d", &y);
        swap(&x, &y);
        return 0;
    }


