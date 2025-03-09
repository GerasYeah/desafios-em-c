#include <stdio.h>

int main() {
    int oceano[10][10];

    for (int i = 0; i < oceano; i++) {
        printf("%d", &oceano[i][i]);
    }
    //printf("");
    return 0;
}