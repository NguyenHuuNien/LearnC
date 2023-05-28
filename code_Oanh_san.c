#include<stdio.h>
#include<string.h>
void trai(char *s){
    int len=strlen(s);
    char tmp =s[0];
    for(int i=0; i<len; i++){
        s[i]=s[i+1];
    }
    s[len-1]=tmp;
}
void phai(char *s){
    int len=strlen(s);
    char tmp =*(s+len-1);
    for(int i=0; i<len-1; i++){
        *(s+i+1)=*(s+i);
    }
    *s=tmp;
}
int main(){
    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
    trai(s1);
    printf("%s",s1);
    printf("\n");
    phai(s2);
    printf("%s",s2);


}
