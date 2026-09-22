#include <stdio.h>
#include <locale.h>
int main() 
{
    setlocale(LC_CTYPE, ".UTF-8");
    double x = 200.0;
    double l = 80.0;
    double v = (10.0 * l)/x;
    printf("исходные данные:\n");
    printf("время X: %.1f мс\n",x);
    printf("длина шага L: %.1f см\n\n", l);
    printf("минимальная скорость передвижения: %.2f м/с\n", v);
    return 0;
}