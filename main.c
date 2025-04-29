// main.c

#include <stdio.h>
#include "file.h"

int main() {
    int year, num, size;
    int is_leap, is_armstrong, largest_num;

    printf("Enter a year: ");
    scanf("%d", &year);
    leap_year(year, &is_leap);
    if (is_leap) printf("%d is a leap year.\n", year);
    else printf("%d is NOT a leap year.\n", year);

    printf("Enter a number: ");
    scanf("%d", &num);
    armstrong(num, &is_armstrong);
    if (is_armstrong) printf("%d is an Armstrong number.\n", num);
    else printf("%d is NOT an Armstrong number.\n", num);

    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    largest(arr, size, &largest_num);
    printf("Largest number: %d\n", largest_num);

    return 0;
}
