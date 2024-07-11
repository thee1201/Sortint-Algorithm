#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 100

void bubbleSort(int array[], int N);
void inputArray(int array[], int N);
void printArray(int array[], int N);
void swap(int* a, int* b);

int main(void) {
	int N;
	int a[MAX];

	printf("Array Size: "); scanf("%d", &N);
	inputArray(a, N);

	bubbleSort(a, N);

	printArray(a, N);
}

void bubbleSort(int array[], int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 1; j < N - i; j++) {
			if (array[j - 1] > array[j]) 
				swap(&array[j - 1], &array[j]);
		}
	}
}

void inputArray(int array[], int N) {
	printf("Array: ");
	for (int i = 0; i < N; i++)
		scanf("%d", &array[i]);
}

void printArray(int array[], int N) {
	printf("\nBubble Sort Array: ");
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