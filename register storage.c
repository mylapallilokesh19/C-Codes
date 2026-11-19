
#include <stdio.h>

void display();

int main() {
    display();
    return 0;
}
void display() {
    register int a = 10;
    register int b = 20;

    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", b);
}


