<h1>Домашнее задание к работе 2</h1>
<h1>Вариант 14</h1>
<h2>Условие задачи</h2>
Пленка поверхностного натяжения позволяет удерживать человека на поверхности воды в течение Х миллисекунд, длина одного шага человека L см. Определить минимальную скорость передвижения человека по воде как по суше.
<h2>Алгооритм и блок схема</h2>
1)Начало<br>
2)Ввод переменных L и X<br>
3)Процесс решения по формуле<br>
4)Вывод результата<br>
5)Конец<br>
#Диаграма
https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=%D0%94%D0%B8%D0%B0%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B0%20%D0%B1%D0%B5%D0%B7%20%D0%BD%D0%B0%D0%B7%D0%B2%D0%B0%D0%BD%D0%B8%D1%8F.drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22PzmSbRNjwQXYWndORIhl%22%3E3Vhdb9owFP01kbYHpHyROI9JGrZJm4TGpD27xE3SmTg1poT%2B%2Bjm2g51SKFTQsvFg7ONr%2B%2Bbec64Jlpcu2i8UNuUPkiNsuXbeWt6N5bqO7wP%2B1SEbiUSeJ4GCVrky0sCsekIKtBW6qnK0HBgyQjCrmiE4J3WN5myAQUrJemh2R%2FDw1AYWaAeYzSHeRX9XOSslCtxQ419RVZT9yU4QyZkF7I3VkyxLmJO1AXmZ5aWUECZ7izZFuAteHxe5brJndusYRTU7ZsH4PmznvxhwfuJp9DCa%2Fnlak5FKBsp3oqC3VdCSrOgcHdirt2ObPnjdtjM1JJSVpCA1xJlGE0pWdY46D20%2B0jbfCWk46HDwHjG2UcSAK0Y4VLIFVrPyzEeIV%2BrMbWQ5JRFZIEY33IAiDFn1OHxIqLhRbO3U0phSuDEMGlLVbGnsPO0AbqBo7kYqx4rkvvcsFafZ84704LTVW3cZpAViatVgWyMmGhI8EUNye99pyLUxvEW4j2eAORGSOyJ80NkNHlaknxgtRX5ibuCAphV56ed5rxDfPMXRjWjtro1D3Y%2FkbNYfxv2S56ml4vE6k0RskPC%2BY4Gw7%2FNWbJBkmgOvEN8xsqmE8hLnDS5jzGtOx9l1WTE0a6AQw5qXvSEjuc4b9K1e8rqlkLsK45RgQvkYd7VilEP655PlehPxsVyeCC%2BwQzCZfNacRpSh1nBnl9WlUXmAIsFaVymnLz09cbwhcTznGXFMIQxYoynCh4olJ1SZ8RmrjPtxVUbq6oBv%2Frmr0Z4kHBd1d3%2BQdfAEW3mXW0GMESYFhQv%2BxA2iFXcD0edzUz3xFiW0qL%2Fkj1dGmibBQBlmfE%2BsTv6h6uQabSZaX9WdKNxTvsYGDkQbHSxiJ6o6OF3VvhtdiFDhGWXsX7GMg6uSsX%2BMjF9R4nE6i0HsnEtnB38FTISAbK2zONBiih3VSuUpMzkFXtZcPPlgzY2DS2muv6LPIrrgikUHrkp0wX9zd4LUfr%2B7M0723qD%2FhI5D%2B1I6BscQ6vLvGN44exc2xAYDbozEB%2BdM8BteeYD7plce%2FS%2BNfInW%2F3V52V8%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E
Реализация программы
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
<h2>Результат работы программы</h2>
исходные данные:<br>
время X: 200.0 мс<br>
длина шага L: 80.0 см<br>
<h2>Информация о разработчике</h2>
Медведкин Артем бТИИ-262<br>
минимальная скорость передвижения: 4.00 м/с<br>
