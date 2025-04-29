// file.h

#ifndef FILE_H
#define FILE_H

int leap_year(int year, int *is_leap) {
    if (year % 4 != 0) *is_leap = 0;
    else if (year % 100 != 0) *is_leap = 1;
    else if (year % 400 == 0) *is_leap = 1;
    else *is_leap = 0;
    return 0;
}

int armstrong(int num, int *is_armstrong) {
    int original = num, sum = 0, digits = 0, temp = num;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        int rem = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= rem;
        }
        sum += power;
        temp /= 10;
    }

    *is_armstrong = (sum == original);
    return 0;
}

int largest(int arr[], int size, int *largest_num) {
    *largest_num = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *largest_num) {
            *largest_num = arr[i];
        }
    }
    return 0;
}

#endif
