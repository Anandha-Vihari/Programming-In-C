#include <stdio.h>
#include <string.h>

// 1. Basic Structure definition
struct Student {
    int roll_number;
    char name[50];
    float gpa;
};

// 2. Structure with nested structure
struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int emp_id;
    char emp_name[50];
    struct Date joining_date;
    float salary;
};

// 3. Structure with array
struct Subject {
    char subject_name[30];
    int marks;
};

struct StudentWithSubjects {
    int roll;
    char name[50];
    struct Subject subjects[3];
};

// 4. Array of structures
struct Teacher {
    int id;
    char name[50];
    char department[30];
};

// 5. Union definition
union Data {
    int i;
    float f;
    char c;
};

int main() {
    printf("=== STRUCTURES AND UNIONS ===\n\n");
    
    // 1. Basic structure declaration and initialization
    printf("1. Basic Structure - Student:\n");
    struct Student s1;
    s1.roll_number = 101;
    strcpy(s1.name, "Rajesh");
    s1.gpa = 3.8;
    printf("Roll: %d, Name: %s, GPA: %.2f\n", s1.roll_number, s1.name, s1.gpa);
    
    // 2. Structure size
    printf("\n2. Size of Structure:\n");
    printf("Size of Student structure: %zu bytes\n", sizeof(struct Student));
    printf("Size of Employee structure: %zu bytes\n", sizeof(struct Employee));
    
    // 3. Structure assignment
    printf("\n3. Structure Assignment:\n");
    struct Student s2 = s1;
    printf("Assigned student - Roll: %d, Name: %s, GPA: %.2f\n", s2.roll_number, s2.name, s2.gpa);
    
    // 4. Nested structure
    printf("\n4. Nested Structure - Employee:\n");
    struct Employee emp;
    emp.emp_id = 201;
    strcpy(emp.emp_name, "Raj Kumar");
    emp.joining_date.day = 15;
    emp.joining_date.month = 3;
    emp.joining_date.year = 2020;
    emp.salary = 50000;
    printf("ID: %d, Name: %s\n", emp.emp_id, emp.emp_name);
    printf("Joining Date: %d/%d/%d\n", emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);
    printf("Salary: %.2f\n", emp.salary);
    
    // 5. Structure with arrays
    printf("\n5. Structure Containing Arrays:\n");
    struct StudentWithSubjects sw;
    sw.roll = 102;
    strcpy(sw.name, "Priya");
    
    strcpy(sw.subjects[0].subject_name, "Mathematics");
    sw.subjects[0].marks = 95;
    
    strcpy(sw.subjects[1].subject_name, "Physics");
    sw.subjects[1].marks = 87;
    
    strcpy(sw.subjects[2].subject_name, "Chemistry");
    sw.subjects[2].marks = 90;
    
    printf("Student: %s (Roll: %d)\n", sw.name, sw.roll);
    for (int i = 0; i < 3; i++) {
        printf("  %s: %d\n", sw.subjects[i].subject_name, sw.subjects[i].marks);
    }
    
    // 6. Array of structures
    printf("\n6. Array of Structures - Teachers:\n");
    struct Teacher teachers[3] = {
        {1, "Mr. Smith", "Physics"},
        {2, "Ms. Johnson", "Chemistry"},
        {3, "Mr. Williams", "Biology"}
    };
    
    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Department: %s\n", teachers[i].id, teachers[i].name, teachers[i].department);
    }
    
    // 7. Array of structures containing arrays
    printf("\n7. Array of Structures Containing Arrays:\n");
    struct StudentWithSubjects students[2];
    
    students[0].roll = 101;
    strcpy(students[0].name, "Aman");
    strcpy(students[0].subjects[0].subject_name, "Maths");
    students[0].subjects[0].marks = 88;
    
    students[1].roll = 102;
    strcpy(students[1].name, "Riya");
    strcpy(students[1].subjects[0].subject_name, "English");
    students[1].subjects[0].marks = 92;
    
    for (int i = 0; i < 2; i++) {
        printf("Roll: %d, Name: %s\n", students[i].roll, students[i].name);
        printf("  Subject: %s, Marks: %d\n", students[i].subjects[0].subject_name, students[i].subjects[0].marks);
    }
    
    // 8. Union demonstration
    printf("\n8. Union - Difference between Structure and Union:\n");
    printf("Size of union Data: %zu bytes\n", sizeof(union Data));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(char));
    
    union Data data;
    printf("\nUnion stores only ONE value at a time:\n");
    data.i = 10;
    printf("data.i = %d\n", data.i);
    
    data.f = 3.14;
    printf("After assigning data.f = 3.14:\n");
    printf("data.i = %d (overwritten)\n", data.i);
    printf("data.f = %.2f\n", data.f);
    
    // 9. Structure vs Union size comparison
    printf("\n9. Structure vs Union - Size Comparison:\n");
    struct SampleStruct {
        int a;
        float b;
        char c;
    };
    
    union SampleUnion {
        int a;
        float b;
        char c;
    };
    
    printf("Size of struct: %zu bytes\n", sizeof(struct SampleStruct));
    printf("Size of union: %zu bytes\n", sizeof(union SampleUnion));
    printf("Structure stores all members simultaneously.\n");
    printf("Union stores only the largest member.\n");
    
    return 0;
}

// Weekend work session on 2022-03-27 - Code review and updates

// Weekend work session on 2022-02-27 - Code review and updates

// Week 4 update

// Week 4 update

// Week 4 update

// Week 4 update

// Week 4 update

// Week 4 update

// Week 4 update

// Week 4 update