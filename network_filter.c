#include <stdio.h>
#include <stdint.h> // Подключение библиотеки для работы с целыми числами фиксированной разрядности, в том числе uint32_t (32-битный беззнаковый тип)

// Преобразование IP-адреса в одно 32-битное число
uint32_t ip_to_number(int a, int b, int c, int d)
{
        if (a < 0 || a > 255 || b < 0 || b > 255 ||
        c < 0 || c > 255 || d < 0 || d > 255)
    {
        printf("Ошибка! Каждый октет IP должен быть от 0 до 255.\n");
        return 0;
    }
    return ((uint32_t)a << 24) | //побитово сдвигаемя влево на 24 бита
       ((uint32_t)b << 16) | ((uint32_t)c << 8)  | (uint32_t)d;
}
// Вывод IP-адреса в классическом формате
void print_ip(uint32_t ip)
{
    printf("%u.%u.%u.%u",
           (ip >> 24) & 255, (ip >> 16) & 255,
           (ip >> 8) & 255, ip & 255);
}
int main()
{
    uint32_t ip = ip_to_number(192, 168, 21, 1);
    printf("Числовой формат: %u\n", ip);
    printf("Обычный формат: ");
    print_ip(ip);
    printf("\n");
    return 0;
}