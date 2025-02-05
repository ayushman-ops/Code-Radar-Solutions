#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // If divisible by any number other than 1 and itself, it's not prime
        }
    }

    return 1; // It's prime
}

int main() {
    int n, num;

    // Get the number of inputs from the user
    scanf("%d", &n);

    // Loop to take n inputs and check if each number is prime
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        // Check if the number is prime or not
        if (isPrime(num)) {
            printf("%d is a Prime number.\n", num);
        } else {
            printf("%d is Not a Prime number.\n", num);
        }
    }

    return 0;
}
