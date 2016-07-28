#define MAXBUF 10000
static char alloc_buf[MAXBUF];
static char *p = alloc_buf;

char *alloct(int ln) {
    if ( alloc_buf + MAXBUF - p > ln ) {
        p = p + ln;
        
        return p-ln;
    }
    return 0;
}
