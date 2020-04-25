
#include <stdio.h>

int fun(int *k) {
    *k += 4;
    return 3 * (*k) - 1;
    }
    void main() {
        int i = 10, j = 10, sum1, sum2;
        sum1 = (i / 2) + fun(&i);
        sum2 = fun(&j) + (j / 2);
        
        printf(" sum1 = %d \n sum2 = %d\n", sum1, sum2);
    
        return;
    }