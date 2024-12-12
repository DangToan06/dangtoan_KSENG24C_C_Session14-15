#include<stdio.h>
#include<string.h>

int countWords(char s[100]){
    int count = 1;
    int lenght = strlen(s);
    int i = 0;
    while(s[i] == ' '){
        if(s[i] == ' '){
            count = 1;
        }
        i++;
    }

    for(i = i; i < lenght; i++){
        if(s[i] == ' '){
            count++;
        }
        if(s[i] == ' ' && s[i+1] == ' '){
            count = count - 1;
        }
    }
    return count - 1;
}

int main(){
    char charaterString[100];
    printf("Nhap vao chuoi ki tu: ");
    fgets(charaterString,100,stdin);
    printf("so tu trong chuoi vua nhap la: %d", countWords(charaterString));
    return 0;
}