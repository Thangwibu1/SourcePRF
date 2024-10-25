#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void change(char *s) {
    int i, n = strlen(s);
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            s[i] = toupper(s[i]);
            s[i + 1] = toupper(s[i + 1]);
        } 
        else if (s[i] == ' ')
        {
            s[i + 1] = toupper(s[i + 1]);
            s[i + 2] = toupper(s[i + 2]);
        }    
    }
}
int main() {
    char s[50];
    gets(s);
    change(s); 
    printf("%s", s);
    return 0;
}