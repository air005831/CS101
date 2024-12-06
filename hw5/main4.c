#include <stdio.h>

int main()
{
    int n = 12345;
    int thousand, unit;
    if(n < 1000){
        thousand = 0;
        unit = n%10;
    }
    else{
        thousand = (n/1000)%10;
        unit = n%10;
    }
    n = n-thousand*1000-unit+thousand+unit*1000;
    printf("%d",n);
    return 0;
}
