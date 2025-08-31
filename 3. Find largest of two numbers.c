#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    if (a > b) {
        printf("%d is the largest\n", a);
    }
    if (b > a) {
        printf("%d is the largest\n", b);
    }
    if (a == b) {
        printf("Both numbers are equal\n");
    }
    
    return 0;
}
