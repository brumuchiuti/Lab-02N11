#include <stdio.h>

#define MAX_SIZE 100

int count(int list[], int size, int element) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (list[i] == element) {
            count++;
        }
    }
    return count;
}

int index_(int list[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (list[i] == element) {
            return i;
        }
    }
    return -1;
}

void reverse(int list[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = list[i];
        list[i] = list[size - i - 1];
        list[size - i - 1] = temp;
    }
}

void sort(int list[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

void append(int list[], int *size, int element) {
    if (*size < MAX_SIZE) {
        list[*size] = element;
        (*size)++;
    }
}

void insert(int list[], int *size, int position, int element) {
    if (*size < MAX_SIZE && position >= 0 && position <= *size) {
        for (int i = *size; i > position; i--) {
            list[i] = list[i - 1];
        }
        list[position] = element;
        (*size)++;
    }
}

int pop(int list[], int *size, int position) {
    if (position < 0 || position >= *size) {
        return -1;
    }
    int popped = list[position];
    for (int i = position; i < *size - 1; i++) {
        list[i] = list[i + 1];
    }
    (*size)--;
    return popped;
}

void remove_element(int list[], int *size, int element) {
    for (int i = 0; i < *size; i++) {
        if (list[i] == element) {
            for (int j = i; j < *size - 1; j++) {
                list[j] = list[j + 1];
            }
            (*size)--;
            i--; 
        }
    }
}

int main() {
    int list[MAX_SIZE] = {0};
    int size = 0;

    append(list, &size, 5);
    append(list, &size, 3);
    append(list, &size, 7);

    printf("Count of 3: %d\n", count(list, size, 3));
    printf("Index of 7: %d\n", index_(list, size, 7));

    printf("Lista com inserção: ");
    insert(list, &size, 1, 2);
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    printf("Popped element: %d\n", pop(list, &size, 1));
    printf("Lista com pop: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    printf("Lista com remoção: ");
    remove_element(list, &size, 2);
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    printf("Lista com reversão: ");
    reverse(list, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    printf("Lista com ordenação: ");
    sort(list, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}