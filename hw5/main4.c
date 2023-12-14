#include <stdio.h>

int main()
{
    int n = 12;
    int a,b,c,d,e;
    a = n % 10;
    b = (n/10)%10;
    c = (n/100)%10;
    d = (n/1000)%10;
    e = n/10000;
    int s =e*10000+a*1000+c*100+b*10+d;
    printf("%d",s);
    return 0;
}
