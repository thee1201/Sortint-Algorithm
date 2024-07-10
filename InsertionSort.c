#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 100

void inputArray(int array[], int N);
void printArray(int array[], int N);
void insertionSort(int array[], int N);
void swap(int* a, int* b);

int main(void) {
	int N;
	int a[MAX];

	printf("Array Size: "); scanf("%d", &N);
	inputArray(a, N);

	insertionSort(a, N);

	printArray(a, N);

	return 0;
}

void insertionSort(int array[], int N) {
	int index;
	for (int i = 1; i < N; i++) {
		index = i;
		for (int j = i - 1; j >= 0; j--) {
			if (array[index] < array[j]) {
				swap(&array[index], &array[j]);
			}
			index--;
		}
	}
}

void inputArray(int array[], int N) {
	printf("Array: ");
	for (int i = 0; i < N; i++)
		scanf("%d", &array[i]);
}

void printArray(int array[], int N) {
	printf("\nInsertion Sort Array: ");
	for (int i = 0; i < N; i++)
		printf("%d ", array[i]);
	printf("\n");
}

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}