#include <stdio.h>

int main() {
    int i = 1;
    (i&(i-1)) ? printf("%d is false\n", i) : printf("%d is ture\n", i);
    return 0;
}
