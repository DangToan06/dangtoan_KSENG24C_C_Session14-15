#include<stdio.h>
#include<string.h>

void reverseString(char s[100]){
    int lenght = strlen(s);
    for(int i = lenght - 1; i >= 0; i--){
        printf("%c ", s[i]);
    }
}

int main(){
    char charaterString[100];
    printf("Nhap vao chuoi ky tu: ");
    scanf("%s", charaterString);
    reverseString(charaterString);
    return 0;
}