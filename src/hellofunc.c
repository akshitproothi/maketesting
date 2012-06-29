#include "hellomake.h"
#include <stdio.h>

void myPrintHelloMake(void) {
    printf("Hello makefiles!\n");

    return;
}

void checkArmstrong(int num) {
    int rest = num;
    int rem = 0;
    int sum = 0;

    while (rest > 0) {
        rem = rest%10;
        rest = (rest - rem)/10;
        sum += rem*rem*rem;
    }

    if (sum == num){
        printf("yes");
    } else {
        printf("no");
    }
}
