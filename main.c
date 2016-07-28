#include <stdio.h>
#include "header.h"
#define MAXLINES 10000
#define MAXSIZE 100
int readlines(char *s[], int max);

int main() {
    char *al[MAXLINES];
    int n;
    
    while ( ( n = readlines(al, MAXLINES)) > 0 ) {
        printf("Success\n");
    }
    
    return 0;
}

int readlines(char *s[], int max) {
    char line[MAXSIZE];
    int l, n;
    char *po;
    n = 0;
    int t;
    t = getlinet(line, MAXSIZE);
    printf("test1:%d:%s\n", t, line);
    po = alloct(t);
    if (po != 0) {
        printf("test3:%s\n", po);
    } else {
        printf("It's null!\n");
    }
    
    
    
    while( ((l = getlinet(line, MAXSIZE)) > 0 ) && (( po = alloct(l)) != 0)) {
        strcpyt(line, po);
        printf("test2:%s:%d\n", po, l);
        n++;
        
    }
    
    return n;
}
