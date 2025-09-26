/* 
    ¿Qué devuelve cada programa?
*/

    #include <stdio.h>
    #include <math.h>

int main()
{
    int i = 0;
    int a = 20;

    while(i < a){
        i = i + 1;
        a = a - 2;

        printf("%d < %d ?\n", i, a);

    }
    return 0;
}