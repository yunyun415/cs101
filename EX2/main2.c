#include <stdio.h>

int main() {
    int i = 9;
    if (i % 15 ==0){
        printf("LOVE IU");
    }
    else if (i % 3 ==0){
        printf("LOVE");
    }
    else if (i % 5 ==0){
        printf("IU");
    }
    else{
        printf("%d\n",i);
    }

    return 0;
}
