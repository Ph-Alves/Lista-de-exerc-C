#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maiuscula(char s[60]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z') {
		s[i] = s[i] - ('a' - 'A');
        }
        i++;
    }
    return;
}

int main() {
    char s[60];
    
    printf("Digite um texto: ");
    fgets(s, sizeof(s), stdin);
    printf("\ntexto original: %s\n", s);
    maiuscula(s);
    printf("texto convertido para maiusculo: %s\n", s);

    return 0;
}