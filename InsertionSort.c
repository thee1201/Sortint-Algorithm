#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 100

void inputArray(int array[], int N);
void printArray(int array[], int N);
void insertionSort(int array[], int N);

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
	int key;
	for (int i = 1; i < N; i++) {
		key = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = key;
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
