#include <stdio.h>

int main() {
 int a = 10;
 printf("a1: %d\n", a);
 sub(a);
 printf("a1: %d\n", a);
}

sub(int a) {
 int b;
 a = a - 1;
 printf("a2: %d\n", a);
}
