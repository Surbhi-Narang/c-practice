//Program for area of rectangle
//A = L*B

#include<stdio.h>
int main(){
    int A, L, B;
    L=5;
    B=10;
    A = L*B;
    printf("Area = %i\n", A);
    return 0;
}

//Using scanf
#include<stdio.h>
int main() {
    int L, B, A;
    printf("Enter Length: ");
    scanf("%i", &L);                
    // & is mandatory in scanf and scanf is used to take input from user.
    printf("Enter Breadth: ");
    scanf("%i", &B);
    A = L*B;
    printf("Area = %i\n", A);
    
    return 0;
}
