# IPv4 Network Filter

**A C-based console application for IPv4 traffic filtering and access control.**

## Overview

IPv4 Network Filter is a console application designed to validate IPv4 addresses, filter network traffic, and control access based on predefined rules.

## Features

- IPv4 address validation and conversion to a 32-bit unsigned integer.
- Whitelist management for trusted IP addresses.
- Blacklist management for blocked IP addresses.
- Local subnet filtering using a network mask.
- Automatic blocking of IP addresses that generate too many requests.
- Cyclic input and real-time access status output.
- Access control with HTTP-style status codes: `200` (allowed) and `403` (blocked).

## Technologies

- C
- GCC
- Git

## Build and Run

Compile the project:

```bash
gcc -std=c11 -Wall -Wextra network_filter.c -o network_filter
```

Run the application:

```bash
./network_filter
```

---

# Анализатор сетевой активности

**Консольное приложение на языке C для фильтрации IPv4-трафика и управления доступом.**

## Описание

IPv4 Network Filter — приложение для проверки IPv4-адресов, фильтрации сетевого трафика и управления доступом на основе заданных правил.

## Возможности

- Проверка корректности IPv4-адресов и преобразование в 32-битное беззнаковое число.
- Работа с белым списком доверенных IP-адресов.
- Работа с чёрным списком заблокированных IP-адресов.
- Фильтрация адресов локальной подсети с использованием маски сети.
- Автоматическая блокировка IP-адресов при превышении допустимой частоты запросов.
- Циклический ввод IP-адресов и вывод результатов проверки.
- Управление доступом с использованием кодов `200` (доступ разрешён) и `403` (доступ запрещён).

## Используемые технологии

- C
- GCC
- Git

## Сборка и запуск

Компиляция:

```bash
gcc -std=c11 -Wall -Wextra network_filter.c -o network_filter
```

Запуск:

```bash
./network_filter
```
