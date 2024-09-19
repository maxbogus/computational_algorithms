#include <stdio.h>

int calculateX() {
    return 0;
}

int main() {
    // попросить ввести пользователя название файла с данными
        // проверить файл
        // проверить наличие файла
    // попросить ввести X
        // проверить ввод
        // если не ок, повторить
    // попросить ввести пользователя n
        // проверить ввод
        // если не ок, повторить
    // пройтись по X и найти два рядом стоящих x
    // проверить выходим ли мы за пределы таблицы
        // если все ок, то считаем
        // если не ок, то выводим сообщение, что происходит экстраполяция

    // находим

    // считаем y(X)

    char *messageStr;

    int formattedStrResult = asprintf(&messageStr, "X is: %d!", calculateX());

    if(formattedStrResult > 0){
        printf(messageStr);
    } else {
        printf("X produced no result!");
    }
    
    return 0;
}
