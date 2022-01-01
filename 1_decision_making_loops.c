#include <stdio.h>

// 1. Simple if statement
void simple_if() {
    int age = 18;
    if (age >= 18) {
        printf("You are an adult\n");
    }
}

// 2. if-else statement
void if_else() {
    int number = 10;
    if (number % 2 == 0) {
        printf("%d is even\n", number);
    } else {
        printf("%d is odd\n", number);
    }
}

// 3. Nested if statement
void nested_if() {
    int marks = 75;
    int attendance = 85;
    if (marks >= 40) {
        if (attendance >= 75) {
            printf("Student passed with good attendance\n");
        } else {
            printf("Student passed but poor attendance\n");
        }
    } else {
        printf("Student failed\n");
    }
}

// 4. else-if ladder
void else_if_ladder() {
    int score = 85;
    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F (Fail)\n");
    }
}

// 5. Switch statement
void switch_demo() {
    int day = 3;
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }
}

// 6. while loop
void while_loop_demo() {
    printf("\nWhile loop (1 to 5):\n");
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

// 7. do-while loop
void do_while_demo() {
    printf("Do-while loop:\n");
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n");
}

// 8. for loop
void for_loop_demo() {
    printf("For loop (multiplication table of 5):\n");
    for (int i = 1; i <= 10; i++) {
        printf("5 * %d = %d\n", i, 5 * i);
    }
}

// 9. break statement
void break_demo() {
    printf("Break statement (stop at 3):\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 4) {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");
}

// 10. continue statement
void continue_demo() {
    printf("Continue statement (skip odd numbers):\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
}

// 11. Nested loops
void nested_loops() {
    printf("Nested loops (multiplication table):\n");
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
}

int main() {
    printf("=== DECISION MAKING AND LOOPING STATEMENTS ===\n\n");
    
    printf("1. Simple if statement:\n");
    simple_if();
    
    printf("\n2. if-else statement:\n");
    if_else();
    
    printf("\n3. Nested if statement:\n");
    nested_if();
    
    printf("\n4. else-if ladder:\n");
    else_if_ladder();
    
    printf("\n5. Switch statement:\n");
    switch_demo();
    
    printf("\n6. ");
    while_loop_demo();
    
    printf("\n7. ");
    do_while_demo();
    
    printf("\n8. ");
    for_loop_demo();
    
    printf("\n9. ");
    break_demo();
    
    printf("\n10. ");
    continue_demo();
    
    printf("\n11. ");
    nested_loops();
    
    return 0;
}


// Week 1 update

// Week 1 update

// Week 1 update

// Week 1 update

// Week 1 update

// Week 1 update