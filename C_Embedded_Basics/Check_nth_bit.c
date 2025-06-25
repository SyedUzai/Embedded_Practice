#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void check_nth_bit(int K, int N){
    bool joe = (K >> N) & 1;
    printf("%d", joe);
}

void main(void){
    int k = 0b1111;
    int n = 1;
    check_nth_bit(k, n);
}
