#include <stdio.h>
#include <stdint.h> // Подключение библиотеки для работы с целыми числами фиксированной разрядности, в том числе uint32_t (32-битный беззнаковый тип)

// Преобразование IP-адреса в одно 32-битное число
uint32_t ip_to_number(int a, int b, int c, int d)
{
    return ((uint32_t)a << 24) |
       ((uint32_t)b << 16) |
       ((uint32_t)c << 8)  |
       (uint32_t)d;

}