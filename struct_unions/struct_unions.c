#include <stdio.h>

typedef struct {
    int a;
    char b;
}def_struct;

typedef union {
    int a;
    char b;
}def_union;

int main(void) {
    def_struct s = {10, 'c'};
    def_union u;
    u.a = 10;

    printf("struct: %d %c\nunion: %d %c\n", s.a, s.b, u.a, u.b);

    u.b = 'a';

    printf("struct: %d %c\nunion: %d %c\n", s.a, s.b, u.a, u.b);

    return 0;
}

/*
struct: 10 c
union: 10 

struct: 10 c
union: 97 a
*/