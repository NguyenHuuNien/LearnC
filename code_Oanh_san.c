#include<stdio.h>
int main(){
    char name1[20],name2[20],que1[14],que2[14];
    int tuoi1,tuoi2;
    fgets(name1,20,stdin);
    fgets(que1,14,stdin);
    scanf(" %d ", &tuoi1);
    fgets(name2,20,stdin);
    fgets(que2,14,stdin);
    scanf("%d", &tuoi2);
    printf("Nhap thong tin sinh vien 1:");
    printf("\n- Ten: %s",name1);
    printf("- Que quan: %s",que1);
    printf("- Tuoi: %d",tuoi1);
    printf("\nNhap thong tin sinh vien 2:");
    printf("\n- Ten: %s", name2);
    printf("- Que quan: %s",que2);
    printf("- Tuoi: %d\n",tuoi2);


    printf("Cac sinh vien da nhap vao:");
    printf("\n*-----------------------------------------------*");
    printf("\n| Ten | Que quan | Tuoi |");
    printf("\n*-----------------------------------------------*"); 
    printf("| %s | %s | %d |\n",name1,que1,tuoi1);
    printf("\n*-----------------------------------------------*\n");
    printf("| %s | %s | %d |",name2,que2,tuoi2);
    printf("\n*-----------------------------------------------*");
 










}
