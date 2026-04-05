#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cstring>

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Исходная строка для анализа
    char text[] = "assasbsa gasgag ab a fggd g";
    // Указатель на текущее найденное слово
    char* word;
    // Счетчик для порядкового номера найденных слов
    int i = 1;

    printf("Текст: %s\n", text);
    printf("Слова, начинающиеся на 'а':\n");

    word = strtok(text, " .,!?;:");

    while (word != NULL) {
        if (tolower((unsigned char)word[0]) == 'a') {
            printf("%d. %s\n", i, word);
            i++;
        }
        word = strtok(NULL, " .,!?;:");
    }
}
