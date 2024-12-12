#include <stdio.h>
#include <string.h>
void deleteWord(char chuoi[], char text);
int main() {
    char chuoi[50], text;
    printf("Nhap chuoi: ");
    fgets(chuoi, 50, stdin);
    printf("Nhap ki tu muon xoa: ");
    text = getchar();  
    deleteWord(chuoi, text);
    printf("Chuoi sau khi xoa: %s\n", chuoi);
    return 0;
}
void deleteWord(char chuoi[], char text) {
	int j = 0;
    for(int i = 0; chuoi[i] != '\0'; i++){
        if(chuoi[i] != text) {
            chuoi[j++] = chuoi[i];
        }
    }
    chuoi[j] = '\0';
}

