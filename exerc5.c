#include <stdio.h>

void strconct(char s[], char t[]) {
    int i, j;

    for (i = 0; s[i] != '\0'; i++);
    for (j = 0; t[j] != '\0'; j++) {
        s[i] = t[j];
        i++;
    }
    s[i] = '\0';
}

int main() {
    char s[60];
    char t[60];

    printf("Digite uma palavra: ");
    scanf("%s", s);    
    fgets(s, sizeof(s), stdin);
    printf("Digite outra palavra: ");
    fgets(t, sizeof(s), stdin);
    scanf("%s", t);

    strconct(s, t);

    printf("A palavra nova e: %s", s);

    return 0;
}