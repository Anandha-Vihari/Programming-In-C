#include <stdio.h>

// 1. Function with no arguments and no return value
void greet() {
    printf("Hello! Welcome to C Programming\n");
}

// 2. Function with arguments but no return value
void add_no_return(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

// 3. Function with arguments and return value
int add_with_return(int a, int b) {
    return a + b;
}

// 4. Function with no arguments but return value
int get_number() {
    return 42;
}

// 5. Factorial using recursion
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// 6. Fibonacci using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 7. Power using recursion
int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1);
}

// 8. Sum of array using function
int sum_array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// 9. Reverse array using function
void reverse_array(int arr[], int size) {
    printf("Reversed array: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 10. Function prototype (declared but defined later)
void display_profile(char name[], int age);

// Local scope demonstration
void local_scope_demo() {
    int local_var = 10;
    printf("Local variable: %d\n", local_var);
}

// Global variable
int global_counter = 0;

void increment_global() {
    global_counter++;
    printf("Global counter: %d\n", global_counter);
}

// External variable (static for this file)
static int static_var = 0;

void increment_static() {
    static_var++;
    printf("Static variable: %d\n", static_var);
}

// Define the prototype function
void display_profile(char name[], int age) {
    printf("Name: %s, Age: %d\n", name, age);
}

int main() {
    printf("=== USER DEFINED FUNCTIONS ===\n\n");
    
    printf("1. Function with no arguments and no return value:\n");
    greet();
    
    printf("\n2. Function with arguments but no return value:\n");
    add_no_return(5, 3);
    
    printf("\n3. Function with arguments and return value:\n");
    int result = add_with_return(10, 20);
    printf("Result: %d\n", result);
    
    printf("\n4. Function with no arguments but return value:\n");
    int num = get_number();
    printf("Number: %d\n", num);
    
    printf("\n5. Factorial using recursion (5!):\n");
    printf("Factorial of 5: %d\n", factorial(5));
    
    printf("\n6. Fibonacci sequence (first 10 numbers):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    printf("\n7. Power using recursion (2^5):\n");
    printf("2^5 = %d\n", power(2, 5));
    
    printf("\n8. Sum of array using function:\n");
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    printf("Sum of array: %d\n", sum_array(arr, size));
    
    printf("\n9. Reverse array using function:\n");
    reverse_array(arr, size);
    
    printf("\n10. Function prototype usage:\n");
    display_profile("John", 25);
    
    printf("\n11. Local scope demonstration:\n");
    local_scope_demo();
    
    printf("\n12. Global variable demonstration:\n");
    increment_global();
    increment_global();
    
    printf("\n13. Static variable demonstration:\n");
    increment_static();
    increment_static();
    increment_static();
    
    return 0;
}

// Weekend work session on 2022-02-19 - Code review and updates

// Weekend work session on 2022-02-26 - Code review and updates

// Week 3 update

// Week 3 update

// Week 3 update

// Week 3 update

// Week 3 update

// Week 3 update

// Week 3 update

// Week 3 update