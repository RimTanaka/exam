/*
Найти и удалить последнее вхождение подстроки
То есть даются 2 строки:
This is mytext
my
Вывод должен был быть
This is text
*/
#include <stdio.h>
#include <string.h>

char* find_last_substring(char* str, char* substr) {
    char *last_occurrence = NULL;
    char *current_occurrence = str;

    // Поиск вхождений подстроки
    while ((current_occurrence = strstr(current_occurrence, substr)) != NULL) {
        last_occurrence = current_occurrence; // Запоминаем последнее вхождение
        current_occurrence++; // Продолжаем искать после текущего вхождения
    }

    return last_occurrence;
}

int main() {
    char str[1000];
    char substr[1000];

    // Ввод основной строки
    fgets(str, 1000, stdin);

    // Убираем символ новой строки
    str[strcspn(str, "\n")] = '\0';

    // Ввод подстроки
    fgets(substr, 1000, stdin);

    // Убираем символ новой строки из подстроки
    substr[strcspn(substr, "\n")] = '\0';

    // Поиск последнего вхождения подстроки
    char* last_occurrence =find_last_substring(str, substr);

    if (last_occurrence != NULL) {
        // Смещаем оставшуюся строку влево, чтобы удалить подстроку
        memmove(last_occurrence, last_occurrence + strlen(substr), strlen(last_occurrence + strlen(substr)) + 1);
    }
    printf("%s", str);
    return 0;
}

