#include "measure.h"
#include <stdio.h>

int square(int x) {
    return x*x;
}

int min2(int a, int b) {
    if(a>b){
        return b;
    } else {
        return a;
    }
}

int max2(int a, int b) {
    if (a>b) {
        return a;
    } else {
        return b;
    }
}

int clamp(int value, int lo, int hi) {
    int high = hi;
    int low = lo;

    if (hi != max2(lo, hi)) {
        high = lo;
        low = hi;
    }
    if (max2(value, high) > high) {
        return high;
    } else if (min2(value, low) < low) {
        return low;
    } else {
        return value;
    }
}

bool is_even(int n) {
    if ((n%2) == 0) {
        return true;
    } else {
        return false;
    }
}

double celsius_to_fahrenheit(double c) {
    return (c * (9.0 / 5.0) + 32);
}

int rectangle_area(int length, int width) {
    if (length < 0 || width < 0) {
        return 0;
    }
    return (length * width);
}

int rectangle_perimeter(int length, int width) {
    if (length < 0 || width < 0) {
        return 0;
    } 
    return (2 * length + 2 * width);
}

int box_volume(int length, int width, int height) {
    if (length < 0 || width < 0 || height < 0) {
        return 0;
    }
    return (length * width * height);
}

void print_rectangle(int length, int width) {
    printf("Rectangle %d x %d\n", length, width);
    printf("Area: %d\n", rectangle_area(length, width));
    printf("Perimeter: %d\n", rectangle_perimeter(length, width));
}

