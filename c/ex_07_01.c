/*
 * Убрать лишние пробелы из строки ввода String, заменить большие пробелы на маленькие
 * Примеры
 * 1    2    3    4    5
 * Вывод
 * 1 2 3 4 5
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {

	char a[1000] = "";
	char b[1000] = "";
	char *ptr = b;
	char *ptra = a;
	fgets(a, 1000, stdin);
	int l = strlen(a);

    if (a[l - 1] == '\n') {
        a[l - 1] = '\0';
        l--;
    }
	int sp = 0;
	for(int i = 0; i < l; i++) {
		if (a[i] == ' ') {
			*ptr = *ptra;
			ptr++;
			ptra++;

			while (*ptra == ' ') ptra++;
		}
		*ptr = *ptra;
		ptr++;
		ptra++;
	}
	// Удаляем лишний пробел в конце, если он есть
    if (*(ptr - 1) == ' ') {
        *(ptr - 1) = '\0'; // Ставим конец строки, чтобы убрать последний пробел
    } else {
        *ptr = '\0'; // Завершаем строку корректно
    }
	printf("%s", b);
	return 0;
}
