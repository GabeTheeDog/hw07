#include "measure.h"
#include <stdio.h>

int main(void) {
    printf("Square of 5: %d\n", square(5));
    printf("\nClamp with 120 range 20-100: %d\n", clamp(120, 20, 100));
    printf("\nClamp with -50 range 1-10: %d\n", clamp(-50, 1, 10));
    printf("\nClamp with 10 range 50-0: %d\n", clamp(10, 50, 0));
    printf("\nIs 2 even: %s\n", is_even(2) ? "true" : "false");
    printf("\nIs 3 even: %s\n", is_even(3) ? "true" : "false");
    printf("\nCelsius 21.2 to F: %f\n", celsius_to_fahrenheit(21.2));
    printf("\nBox volume 10x5x2: %d\n", box_volume(10, 5, 2));
    printf("\nRectangle size 5x4\n");
    print_rectangle(5, 4);
    printf("\nRectangle size -1x2\n");
    print_rectangle(-1,2);
}
