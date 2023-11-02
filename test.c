﻿#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[1000];

	for (int i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0;i < n - 1;i++) {
		for (int j = i + 1;j < n;j++) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	// in ra day da duoc sap xep
	for (int i = 0;i < n;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	// in ra so nho nhat
	printf("%d\n", arr[0]);
	//in ra so lon nhat
	printf("%d\n", arr[n - 1]);
	return 0;
}