#include <stdio.h>

int main() {
    int num;

    printf("Enter a number (up to 5 digits): ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }

    if (num >= 0 && num <= 9) {
        printf("The number has 1 digit.\n");
    } 
    else if (num >= 10 && num <= 99) {
        printf("The number has 2 digits.\n");
    } 
    else if (num >= 100 && num <= 999) {
        printf("The number has 3 digits.\n");
    } 
    else if (num >= 1000 && num <= 9999) {
        printf("The number has 4 digits.\n");
    } 
    else if (num >= 10000 && num <= 99999) {
        printf("The number has 5 digits.\n");
    } 
    else {
        printf("The number exceeds 5 digits.\n");
    }

    return 0;
}
