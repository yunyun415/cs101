#include <stdio.h>

int main() {
    double PI = 4.0;
    double x = 0.00001;  
    int sign = -1;  
    double term;

    for (int i = 3; ; i += 2) {
        term = (double)4 / i;

        if (term < x) {
            break;
        }

        PI += sign * term;
        sign *= -1;
    }

    printf("%.5f\n", PI);
    return 0;
}
