#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 100

void selectionSort(int array[], int N);
void swap(int* a, int* b);
void inputArray(int array[], int N);
void printArray(int array[], int N);

int main(void) {
	int a[MAX];
	int N;

	printf("Array Size: "); scanf("%d", &N);
	inputArray(a, N);

	selectionSort(a, N);

	printArray(a, N);

	return 0;
}

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void inputArray(int array[], int N) {
	printf("Array: ");
	for (int i = 0; i < N; i++)
		scanf("%d", &array[i]);
}

void selectionSort(int array[], int N) {
	int mindex;
	for (int i = 0; i < N; i++) {
		mindex = i;
		for (int j = i; j < N; j++) {
			if (array[j] < array[mindex])
				mindex = j;
		}
		swap(&array[i], &array[mindex]);
	}
}

void printArray(int array[], int N) {
	printf("\nSelection Sort Array: ");
	for (int i = 0; i < N; i++)
		printf("%d ", array[i]);
	printf("\n");
}
