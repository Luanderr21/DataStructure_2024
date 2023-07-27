#include <stdio.h>

void createList(int *l){
    (*l)++;
}

int main() {
    int i = 0;
    createList(&i);
    printf("%d", i);
    return 0;
}
