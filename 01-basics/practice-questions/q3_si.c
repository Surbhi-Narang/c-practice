//Problem for simple interest -> SI = P*R*T / 100

#include<stdio.h>

int main() {
    int P, R, T, SI;
    P = 100;
    R = 2;
    T = 4;
  
    SI = P*R*T /100;
  
    printf("SI = %d", SI);
  
    return 0;
}

// Output => SI = 8
