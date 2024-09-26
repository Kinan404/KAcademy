#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    for (int i = 0; i < 33; i++)
    {
        for(int k = 0; k < 30; k++) {
            printf("%d", k);
        }
        printf("%d", i);
    }
    
    return 0;
}
