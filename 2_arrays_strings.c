#include <stdio.h>
#include <string.h>

#define MAX 100

// 1. One Dimensional Array - Declaration, initialization and access
void one_dimensional_array() {
    int arr[5] = {10, 20, 30, 40, 50};
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 2. Calculate average of array elements
void array_average() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float average = (float)sum / n;
    printf("Average: %.2f\n", average);
}

// 3. Find largest element in array
void largest_element() {
    int arr[] = {15, 42, 18, 65, 35, 22};
    int n = 6;
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("Largest element: %d\n", largest);
}

// 4. Sorting array in ascending order (Bubble Sort)
void sort_array_ascending() {
    int arr[] = {50, 20, 40, 10, 30};
    int n = 5;
    printf("Unsorted array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

// 5. Two Dimensional Array
void two_dimensional_array() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    printf("2D Array (Matrix):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// 6. Matrix Addition
void matrix_addition() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    
    printf("Matrix A:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) printf("%d ", A[i][j]);
        printf("\n");
    }
    
    printf("Matrix B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) printf("%d ", B[i][j]);
        printf("\n");
    }
    
    printf("Matrix A + B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) printf("%d ", C[i][j]);
        printf("\n");
    }
}

// 7. Matrix Multiplication
void matrix_multiplication() {
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int C[2][2] = {0};
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    printf("Matrix Multiplication Result:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) printf("%d ", C[i][j]);
        printf("\n");
    }
}

// 8. Matrix Transpose
void matrix_transpose() {
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int T[3][2];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            T[j][i] = A[i][j];
        }
    }
    
    printf("Original Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) printf("%d ", A[i][j]);
        printf("\n");
    }
    
    printf("Transpose:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) printf("%d ", T[i][j]);
        printf("\n");
    }
}

// 9. String declaration and initialization
void string_demo() {
    char str1[] = "Hello";
    char str2[20];
    
    printf("String 1: %s\n", str1);
    printf("Enter a string: ");
    scanf("%s", str2);
    printf("String 2: %s\n", str2);
}

// 10. String handling functions
void string_functions() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    char result[50];
    
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("Length of str1: %zu\n", strlen(str1));
    printf("Length of str2: %zu\n", strlen(str2));
    
    strcpy(result, str1);
    printf("Copied str1 to result: %s\n", result);
    
    strcat(result, " ");
    strcat(result, str2);
    printf("Concatenated result: %s\n", result);
    
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
}

int main() {
    printf("=== ARRAYS AND STRINGS ===\n\n");
    
    printf("1. One Dimensional Array:\n");
    one_dimensional_array();
    
    printf("\n2. Average of Array Elements:\n");
    array_average();
    
    printf("\n3. Largest Element in Array:\n");
    largest_element();
    
    printf("\n4. Sorting Array in Ascending Order:\n");
    sort_array_ascending();
    
    printf("\n5. Two Dimensional Array:\n");
    two_dimensional_array();
    
    printf("\n6. Matrix Addition:\n");
    matrix_addition();
    
    printf("\n7. Matrix Multiplication:\n");
    matrix_multiplication();
    
    printf("\n8. Matrix Transpose:\n");
    matrix_transpose();
    
    printf("\n9. String Declaration and Initialization:\n");
    printf("String: Hello\n");
    
    printf("\n10. String Handling Functions:\n");
    string_functions();
    
    return 0;
}

// Weekend work session on 2022-01-09 - Code review and updates

// Weekend work session on 2022-02-20 - Code review and updates

// Week 2 update

// Week 2 update

// Week 2 update

// Week 2 update

// Week 2 update

// Week 2 update

// Week 2 update

// Week 2 update