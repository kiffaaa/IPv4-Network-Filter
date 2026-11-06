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
    else
    {
        return ((uint32_t)a << 24) | //побитово сдвигаемя влево на 24 бита
       ((uint32_t)b << 16) | ((uint32_t)c << 8)  | (uint32_t)d;
    }
}

// Вывод IP-адреса в классическом формате
void print_ip(uint32_t ip)
{
    printf("%u.%u.%u.%u",
           (ip >> 24) & 255, // Сдвигаем IP вправо и оставляем только нужные 8 бит (первый октет)
           (ip >> 16) & 255, (ip >> 8) & 255, ip & 255);
}
uint32_t white_list[] = {
    2130706433,  // 127.0.0.1
    134744072,   // 8.8.8.8
    167772161,   // 10.0.0.1
    3392992000,  // 202.61.11.0
    253427715    // 15.27.0.3
};
// Проверка принадлежности IP к локальной сети
int is_local_network(uint32_t ip)
{
    uint32_t local_network = 1775698176; // 105.215.1.0
    uint32_t network_mask = 4294967168; // 255.255.255.128
    if ((ip & network_mask) == (local_network & network_mask))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    uint32_t ip = ip_to_number(255, 255, 255, 128);
    printf("Числовой формат: %u\n", ip);
    printf("Обычный формат: ");
    print_ip(ip);
    printf("\n");
    return 0;
}