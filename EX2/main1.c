
#include <stdio.h>

int main() {
    int i = 9;
    if (i & (i-1)){
        printf("true");
    }
    else {
        printf("false");
    }

    return 0;
}
