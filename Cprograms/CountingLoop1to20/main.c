#include <stdio.h>

void CountingLoop1to20() {
    for (u_int8_t x=1; x<=20; x++) {
        printf("%i and then...\n",x);
    }
    printf("that\'s all.");
}


int main() {
    CountingLoop1to20();
    return 0;
}
