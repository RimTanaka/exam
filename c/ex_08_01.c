/*//  Создать структуру student, с переменными имя и оценка, количество студентов указывается вводом.
//  Ввод 
//  Andrey
//  15
//  Sergey 
//  20
//  Anton
//  10
//  Вывести всех студентов через запятую у кого балл выше среднего
//  Anton, Sergey*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct Student{
	char name[100];
	int total;
} Student;

int main() {
	int n;
	scanf("%d", &n);
	Student students[n];
	double avg = 0;
	for(int i = 0; i < n; i++){
		scanf("%s", &students[i].name);
		scanf("%d", &students[i].total);
		avg += students[i].total;
	}
	int first = 1;
	for(int i = 0; i < n; i++){
		if (students[i].total >= avg/n){
			if (first) {
				printf("%s", students[i].name);
				first = 0;
			} else
				printf(", %s", students[i].name);
		}
	}


	return 0;
}
