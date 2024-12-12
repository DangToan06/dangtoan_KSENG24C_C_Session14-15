#include<stdio.h>
#include<string.h>

int checkCharater(char s[100], char search){
    int lenght = strlen(s);
    int count = 0;
    for(int i = 0; i < lenght; i++){
        if(s[i] == search){
            count++;
        }
    }
    return count;
}

int main(){
    char charaterString[100], charater;
    printf("Nhap vao chuoi ky tu: ");
    scanf("%s", charaterString);
    fflush(stdin);
    printf("Nhap cao ky tu can kiem tra: ");
    scanf("%c", &charater);
    printf("So lan suat hien cua ky tu do la: %d", checkCharater(charaterString, charater));
    return 0;
}