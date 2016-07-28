#include <stdio.h>

int getlinet(char s[], int max) {
    int c, i;
    i = 0;
    

    
    /* for (i=0; i < max -1 && (c = getchar()) && c != '\n' && c != EOF;i++) {
        s[i] = c;
    } */
    
    while ( --max > 0 && (c = getchar()) && c != '\n' && c != EOF )
        s[i++] = c;
    
    
    if (c == '\n') {
        s[i++] = '\n';
    }
    
        s[i] = '\0';
    
    
    return i;
}
