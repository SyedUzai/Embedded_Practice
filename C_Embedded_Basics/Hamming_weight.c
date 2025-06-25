#include <stdio.h>
#include <string.h>

int count_set(int k){
    int count = 0;
    while(k){
        count += k & 1;
        k >>= 1;
    }

    return count;
}

void main(void){
    int k = 13;
    int answer = count_set(13);
    printf("%d", answer);

}
