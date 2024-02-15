#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the triangle: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");}
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <=i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
