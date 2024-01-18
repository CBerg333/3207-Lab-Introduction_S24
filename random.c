#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 122
#define MIN 97

char randchar() {
    int ch = (rand() % (MAX-MIN+1)) + MIN;
    return ch;
}