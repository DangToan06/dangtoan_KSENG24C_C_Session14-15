#include<stdio.h>
#include<string.h>

void takeCharater(char s[100]){
    int n = strlen(s);
    for(int i = 0; i < n; i++){
        printf("%c ", s[i]);
    }
}

int main(){
    char charaterString[100];
    printf("Nhap chuoi ku tu: ");
    scanf("%s", charaterString);
    takeCharater(charaterString);
    return 0;
}