#include <stdio.h>


void countingUserInput() {
    int32_t maxLimit;
    puts("What number would you like to count to?");
    scanf("%i",&maxLimit);
    for(u_int8_t x=1; x<=maxLimit; x++) {
        printf("%i and then...\n",x);
    }
    printf("that\'s all.");
}


int main() {
    countingUserInput();
    return 0;
}

