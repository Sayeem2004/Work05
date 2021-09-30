#include <stdio.h>

int main() {
    // Step 1
    char a = 101;
    int b = 1000001;
    long c = 10000000001;

    // Step 2
    printf("&a in hex: %lx\t &a in dec: %ld\n", &a, &a);
    printf("&b in hex: %lx\t &b in dec: %ld\n", &b, &b);
    printf("&c in hex: %lx\t &c in dec: %ld\n", &c, &c);
    printf("\n");

    // Step 3
    char *ap = &a;
    int *bp = &b;
    long *cp = &c;

    // Step 4
    printf("value of ap: %p\n", ap);
    printf("value of bp: %p\n", bp);
    printf("value of cp: %p\n", cp);
    printf("\n");

    // Step 5
    (*ap)++;
    (*bp)++;
    (*cp)++;
    printf("value of a: %c\n", a);
    printf("value of b: %d\n", b);
    printf("value of c: %ld\n", c);
    printf("\n");

    // Step 6
    unsigned int d = 1001;
    char *dp1 = &d;
    int *dp2 = &d;

    // Step 7
    printf("value of dp1: %p\t dp1 points to: %c\n", dp1, *dp1);
    printf("value of dp2: %p\t dp2 points to: %d\n", dp2, *dp2);
    printf("\n");

    // Step 8
    printf("d in hex: %x\t d in dec: %u\n", d, d);
    printf("\n");

    // Step 9
    printf("bytes of d in hex: %hhx %hhx %hhx %hhx\n", *(dp1+0), *(dp1+1), *(dp1+2), *(dp1+3));
    printf("bytes of d in dec: %hhu %hhu %hhu %hhu\n", *(dp1+0), *(dp1+1), *(dp1+2), *(dp1+3));
    printf("\n");

    // Step 10
    (*(dp1+0))++;
    printf("d in hex: %x\t\t d in dec: %u\n", d, d);
    (*(dp1+1))++;
    printf("d in hex: %x\t\t d in dec: %u\n", d, d);
    (*(dp1+2))++;
    printf("d in hex: %x\t\t d in dec: %u\n", d, d);
    (*(dp1+3))++;
    printf("d in hex: %x\t d in dec: %u\n", d, d);
    printf("bytes of d in hex: %hhx %hhx %hhx %hhx\n", *(dp1+0), *(dp1+1), *(dp1+2), *(dp1+3));
    printf("bytes of d in dec: %hhu %hhu %hhu %hhu\n", *(dp1+0), *(dp1+1), *(dp1+2), *(dp1+3));
    printf("\n");

    // Step 11
    (*(dp1+0))+=16;
    printf("d in hex: %x\t d in dec: %u\n", d, d);
    (*(dp1+1))+=16;
    printf("d in hex: %x\t d in dec: %u\n", d, d);
    (*(dp1+2))+=16;
    printf("d in hex: %x\t d in dec: %u\n", d, d);
    (*(dp1+3))+=16;
    printf("d in hex: %x\t d in dec: %u\n", d, d);
    printf("bytes of d in hex: %hhx %hhx %hhx %hhx\n", *(dp1+0), *(dp1+1), *(dp1+2), *(dp1+3));
    printf("bytes of d in dec: %hhu %hhu %hhu %hhu\n", *(dp1+0), *(dp1+1), *(dp1+2), *(dp1+3));

    return 0;
}
