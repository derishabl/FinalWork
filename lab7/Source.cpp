#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cstring>

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Исходная строка для анализа
    char text[] = "assasbsa gasgag ab a fggd g";

// Проверка на «положительность» первой объявленной переменной (текстовой строки)
    // В контексте строки проверяем, что она не пустая и содержит хотя бы один символ
    if (strlen(text) > 0) {
        printf("Строка text не пустая, длина: %zu символов. Продолжаем выполнение.\n\n", strlen(text));
    } else {
        printf("Ошибка: строка text пустая!\n");
        return; // Завершаем программу, если строка пустая
    }

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
