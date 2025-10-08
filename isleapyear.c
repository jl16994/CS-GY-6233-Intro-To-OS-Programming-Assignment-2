#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // Check if year argument was provided
    if (argc != 2) {
        printf("Usage: %s <year>\n", argv[0]);
        return 1;
    }
    
    // Convert argument to integer
    int year = atoi(argv[1]);
    
    // Check if it's a leap year
    int is_leap = 0;
    
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                is_leap = 1;
            } else {
                is_leap = 0;
            }
        } else {
            is_leap = 1;
        }
    } else {
        is_leap = 0;
    }
    
    // Print result
    if (is_leap) {
        printf("%d was a leap year\n", year);
    } else {
        printf("%d was not a leap year\n", year);
    }
    
    return 0;
}