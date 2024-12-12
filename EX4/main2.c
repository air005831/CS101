#include <stdio.h>

int main()
{
    double pi = 4.0f;
    int sign = -1, i, ipi = 0 ;
    for(i = 1 ; ipi != 314159 ; i++){
        pi += sign * 4.0 / (2 * i + 1);
        sign = -sign;
        ipi = pi * 100000;
    }
    printf("X = %d\n",(i-1)*2 +1);//執行完最後一次會再加一個i所以要剪掉
    printf("%.10f\n",ipi / 100000.0);
    printf("%.10f\n",pi*100000.0);
    
    return 0;
}
