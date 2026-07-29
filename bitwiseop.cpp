// & bitwise AND 
// ^ XOR  bitwise op
// | bitwise OR
// ~ bitwise NOT
// << left shift
//>> right shift

# include<stdio.h>
int main(){
    printf("bitwise and = %d\n",6&3);
    printf("bitwise and = %d\n",6|3);
    printf("bitwise and = %d\n",6^3);
}

// 8 4 2 1
// 0 1 1 0 ==>6
// 0 0 1 1 ==>3

// 0 0 1 0 ==>2
// 0 1 1 1 ==>7

// truth table for bitwise AND
// A  B  A&B
// 1  1   1
// 0  1   0
// 1  0   0
// 0  0   0