#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int len = 100;
int back = 0;
int* creat() {
    int *tmp = (int*)malloc(sizeof(int) * (len));
    return tmp;
}
int* que = creat();
void push(int x) {
    if (back == len) {
        int *new_arr = (int*)malloc(sizeof(int) * (len * 2));
        for (int i = 0; i < len;i++) {
            new_arr[i] = que[i];
        }
        len += len;
        free(que);
        que = new_arr;

    }
    que[back] = x;
    printf("Da them %d", x);
    back++;
}
void pop() {
    if (back == 0) return;
    for (int i = 0; i < back; i++) {
        que[i] = que[i + 1];
    }
    --back;

}
int get_front() {
    return que[0];
}

void print() {
    for (int i = 0; i < back;i++) {
        printf("%d ", que[i]);
    }
    printf("\n");
}

int main() {
    for (int i = 1; i <= 20; i++) {
        push(i);
    }
}