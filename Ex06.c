#include<stdio.h>
#include<string.h>

int countCharater(char s[100]){
    int count = 0;
    int n = strlen(s);
    for(int i = 0; i < n; i++){
        if(s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122){
            count++;
        }
    }
    return count;
}

int main(){
    char stringCharater[100];
    printf("Nhap vao xau ky tu: ");
    fgets(stringCharater,100,stdin);
    printf("So ki tu la chu cai trong chuoi la: %d", countCharater(stringCharater));
    return 0;
}
