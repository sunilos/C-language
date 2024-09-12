
#include <stdio.h>

int globalVar = 10;

void display() {
    int localVar = 20;
    printf("Global Variable: %d\n", globalVar);
    printf("Local Variable: %d\n", localVar);
}

int main() {
    display();
    return 0;
}
