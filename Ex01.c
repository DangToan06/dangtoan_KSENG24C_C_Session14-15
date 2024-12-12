#include<stdio.h>
#include<string.h>

void ExportString(char s[]){
    printf("chuoi vua nhap la: %s", s);
}

int lenghtString(char s[]){
    int lenght = strlen(s);
    return lenght;
}

int main(){
    char characterString[100];
    scanf("%s", characterString);
    ExportString(characterString);
    printf("\nDo dai chuoi vua nhat la: %d", lenghtString(characterString));
    return 0;
}