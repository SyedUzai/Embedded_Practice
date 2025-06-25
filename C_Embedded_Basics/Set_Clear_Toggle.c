#include <stdio.h>
#include <string.h>


//Another way to do it 
#define shift_3rd_bit (1 << 3)
void set_3rd_bit(void){
    int data;
    data |=  shift_3rd_bit;
}

int set_nth_bit (int K, int N){
    // Setting bit with OR operation
   return K |= (1 << N);
} 

int clear_nth_bit (int K, int N){
    // Clearing nth bit with compliment AND
    return K &= ~(1 << N);
}

int toggle_nth_bit (int K, int N){
    return K ^= (1 << N);
}
 

void main(void){
    
}
