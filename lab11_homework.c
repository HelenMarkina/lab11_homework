#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

void task();

int main() {
    setlocale(LC_ALL, "");

    task();
    return 0;
}

void task() {
    int n;
    printf("Введите размер массива (1-100): ");
    scanf("%d", &n);

    int arr[100], sum = 0, min, max;

    printf("Введите %d чисел: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (i == 0) {
            min = max = arr[0];
        }
        else {
            if (arr[i] < min) min = arr[i];
            if (arr[i] > max) max = arr[i];
        }
        sum += arr[i];
    }

    int result = sum - min - max;

    printf("Общая сумма: %d\n", sum);
    printf("Минимальный элемент: %d\n", min);
    printf("Максимальный элемент: %d\n", max);
    printf("Сумма за исключением min и max: %d\n", result);
}