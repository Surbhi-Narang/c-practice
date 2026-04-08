//Problem for vol of cylinder -> vol = 3.14*R*R*H

#include<stdio.h>

int main() {
    float R, H, Volume;
    R = 2;
    H = 4;
  
    Volume = 3.14 * R * R* H;
  
    printf("Volume of a cylinder is %f", Volume);
  
    return 0;
}

// Output => Volume of a cylinder is 50.240002
