/*
 * проверка слова на полиндром (стр должна заканчив \n)
 * входная строка может содержать буквы латинского алфавита и цифры, длина строки до 100 символов
ввод        	| вывод
------------------------
Mam mam         | YES
------------------------
Test1       	| NO
 * */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_palindrome(char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    // Игнорируем символ новой строки
    if (str[right] == '\n') {
        right--;
    }

    while (left < right) {

        // Сравниваем символы без учёта регистра
        if (tolower(str[left]) != tolower(str[right])) {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

int main() {
    char str[101]; // Массив для строки (100 символов + \n)

    // Ввод строки
    fgets(str, 101, stdin);

    if (is_palindrome(str)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
