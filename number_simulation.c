#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nNumber Simulation:\n");

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
