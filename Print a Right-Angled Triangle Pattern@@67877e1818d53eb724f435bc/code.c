// Your code here...
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i=a; i>0; i--){
        for(int j=a; j>(i-1); j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}