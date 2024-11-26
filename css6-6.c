#include <stdio.h>

int main() {
    // vong lap for tu 1 den 100
    int i;
    for ( i = 1; i <= 100; i++) {
        //boi so cau ba va nam
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        }
        // boi so cua ba
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        // boi so cua nam
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        // neu khong phai boi cua ba va nam thi in ra
        else {
            printf("%d\n", i);
        }
    }

    return 0;
}

