#include <iostream>
using namespace std;

// Outer function that accepts a number and processes it
int complexOperation(int n) {
    // First nested lambda to check if a number is prime
    auto isPrime = [](int num) -> bool {
        if (num <= 1) return false;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    };

    // Second nested lambda to calculate factorial recursively
    function<int(int)> factorial = [&](int x) -> int {
        if (x <= 1) return 1;
        return x * factorial(x - 1);
    };

    // Third lambda to find the nth Fibonacci number recursively
    function<int(int)> fibonacci = [&](int x) -> int {
        if (x <= 1) return x;
        return fibonacci(x - 1) + fibonacci(x - 2);
    };

    // Using the lambdas to process the number
    cout << "Processing number: " << n << endl;

    // Check if the number is prime
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    // Calculate the factorial of the number
    int factResult = factorial(n);
    cout << "Factorial of " << n << " is: " << factResult << endl;

    // Calculate the nth Fibonacci number
    int fibResult = fibonacci(n);
    cout << n << "th Fibonacci number is: " << fibResult << endl;

    // Return the sum of factorial and Fibonacci for complexity
    return factResult + fibResult;
}

int main() {
    int num = 5;
    int result = complexOperation(num); // Calling the complex nested function
    cout << "Final result of complex operation is: " << result << endl;
    return 0;
}
