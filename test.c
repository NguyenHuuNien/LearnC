﻿#include<stdio.h>

void InMang(int* arr, int size) {
	for (int i = 0;i < size;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Heap(int* arr, int size, int root) {
	int key = arr[root];
	while ((root * 2 + 1) <= size) { // Lặp đến khi không có lá
		int c = root * 2 + 1;
		if (c + 1 < size && arr[c] < arr[c + 1]) c += 1;
		if (arr[c] <= key) break;
		arr[root] = arr[c];
		root = c;
	}
	arr[root] = key;
}

void HeapSort(int* arr, int size) {
	// Khởi tạo Heap
	for (int i = size / 2 - 1;i >= 0;i--) {
		Heap(arr, size, i);
	}
	/*Đổi chỗ đầu và cuối, tìm được số lớn nhất rồi, đang lưu ở cuối
	=> không cần xét số đó nữa, giảm size đi 1*/
	for (int i = size - 1;i >= 1;i--) {
		arr[0] += arr[i];
		arr[i] = arr[0] - arr[i];
		arr[0] -= arr[i];
		Heap(arr, i - 1, 0);
	}
}

int main() {
	int arr[] = { 1,2,5,4,8,3,6,7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	HeapSort(arr, size);
	InMang(arr, size);
	return 0;
}