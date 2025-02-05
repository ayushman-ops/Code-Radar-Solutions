#include <stdio.h>
#include <math.h>  // To use the sqrt function

int main() {
    int num;
    
    // Get the number input from the user
    
    scanf("%d", &num);

    // Calculate the square root of the number
    int sqrt_num = (int) sqrt(num);

    // Check if the square of the integer square root is equal to the original number
    if (sqrt_num * sqrt_num == num) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
