#include<stdio.h>

void InMang(int* arr, int size) {
	for (int i = 0;i < size;i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void SelectionSort(int* arr, int size) {
	for (int i = 0;i < size-1;i++) {
		int k = i;
		for (int j = i + 1;j < size;j++) {
			if (arr[k] > arr[j])
				k = j;
		}
		int tmp = arr[i];
		arr[i] = arr[k];
		arr[k] = tmp;
	}
}

int main() {
	int arr[] = { 806,452,664,223,112,3,64,4,433,255,55 };
	SelectionSort(arr, 11);
	InMang(arr, 11);
	return 0;
}