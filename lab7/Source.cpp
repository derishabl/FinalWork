#define _CRT_SECURE_NO_WARNINGS strtok
#include <iostream>
#include <Windows.h>

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char text[] = "assasbsa gasgag ab a fggd g";
    char* word;
    int b = 1;

    printf("Текст: %s\n", text);
    printf("Слова, начинающиеся на 'а':\n");

    word = strtok(text, " .,!?;:");

    while (word != NULL) {
        if (tolower((char)word[0]) == 'a') {
            printf("%d. %s\n", i, word);
            i++;
        }
        word = strtok(NULL, " .,!?;:");
    }
}