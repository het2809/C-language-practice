#include <stdio.h>
int main() {
int n, i, j, space;
printf("Enter the number of rows: ");
scanf("%d", &n);
for (i = 1; i <= n; i++) {
for (space = 1; space <= n - i; space++) {
printf(" ");
}
for (j = 1; j <= i; j++) {
printf("*");
}
printf("\n");
}
return 0;
}
