#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECORDS 100

struct Record {
    int id;
    char name[50];
    float salary;
};

// 1. Write to file
void write_to_file() {
    FILE *fptr;
    char filename[] = "data.txt";
    
    fptr = fopen(filename, "w");
    
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }
    
    fprintf(fptr, "Hello World\n");
    fprintf(fptr, "This is a file handling example\n");
    fprintf(fptr, "C Programming\n");
    
    fclose(fptr);
    printf("Data written to %s successfully!\n", filename);
}

// 2. Read from file
void read_from_file() {
    FILE *fptr;
    char filename[] = "data.txt";
    char buffer[100];
    
    fptr = fopen(filename, "r");
    
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        return;
    }
    
    printf("Reading from file:\n");
    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(fptr);
}

// 3. Append to file
void append_to_file() {
    FILE *fptr;
    char filename[] = "data.txt";
    
    fptr = fopen(filename, "a");
    
    if (fptr == NULL) {
        printf("Error opening file for appending!\n");
        return;
    }
    
    fprintf(fptr, "Appended line 1\n");
    fprintf(fptr, "Appended line 2\n");
    
    fclose(fptr);
    printf("Data appended to %s successfully!\n", filename);
}

// 4. Write structured data to file
void write_records_to_file() {
    FILE *fptr;
    fptr = fopen("records.txt", "w");
    
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    struct Record records[3] = {
        {101, "Rajesh", 50000},
        {102, "Priya", 55000},
        {103, "Aman", 60000}
    };
    
    fprintf(fptr, "ID\tName\t\tSalary\n");
    fprintf(fptr, "====================================\n");
    
    for (int i = 0; i < 3; i++) {
        fprintf(fptr, "%d\t%s\t\t%.2f\n", records[i].id, records[i].name, records[i].salary);
    }
    
    fclose(fptr);
    printf("Records written to records.txt successfully!\n");
}

// 5. Read structured data from file
void read_records_from_file() {
    FILE *fptr;
    struct Record rec;
    
    fptr = fopen("records.txt", "r");
    
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    printf("Reading records from file:\n");
    char buffer[100];
    
    // Skip header
    fgets(buffer, sizeof(buffer), fptr);
    fgets(buffer, sizeof(buffer), fptr);
    
    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(fptr);
}

// 6. Random access to file
void random_access_demo() {
    FILE *fptr;
    fptr = fopen("random.bin", "w+b");
    
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    struct Record records[3] = {
        {101, "Rajesh", 50000},
        {102, "Priya", 55000},
        {103, "Aman", 60000}
    };
    
    // Write records to binary file
    for (int i = 0; i < 3; i++) {
        fwrite(&records[i], sizeof(struct Record), 1, fptr);
    }
    
    // Random access - read 2nd record
    printf("Random Access to Binary File:\n");
    struct Record temp;
    
    fseek(fptr, 1 * sizeof(struct Record), SEEK_SET);
    fread(&temp, sizeof(struct Record), 1, fptr);
    printf("2nd Record: ID=%d, Name=%s, Salary=%.2f\n", temp.id, temp.name, temp.salary);
    
    // Read 1st record
    fseek(fptr, 0, SEEK_SET);
    fread(&temp, sizeof(struct Record), 1, fptr);
    printf("1st Record: ID=%d, Name=%s, Salary=%.2f\n", temp.id, temp.name, temp.salary);
    
    fclose(fptr);
}

// 7. File file operations with error checking
void file_operations_demo() {
    FILE *fptr;
    char filename[] = "numbers.txt";
    
    // Write mode
    fptr = fopen(filename, "w");
    if (fptr != NULL) {
        for (int i = 1; i <= 5; i++) {
            fprintf(fptr, "%d\n", i * 10);
        }
        fclose(fptr);
        printf("Numbers written to file successfully!\n");
    } else {
        printf("Error opening file for writing!\n");
    }
    
    // Read mode
    fptr = fopen(filename, "r");
    if (fptr != NULL) {
        printf("Reading from file:\n");
        int num;
        while (fscanf(fptr, "%d", &num) == 1) {
            printf("%d ", num);
        }
        printf("\n");
        fclose(fptr);
    } else {
        printf("Error opening file for reading!\n");
    }
}

// 8. Character input/output to file
void character_io_demo() {
    FILE *fptr;
    fptr = fopen("chars.txt", "w+");
    
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    // Write characters
    char str[] = "ABCDEF";
    for (int i = 0; str[i] != '\0'; i++) {
        fputc(str[i], fptr);
    }
    
    // Read characters
    rewind(fptr);
    printf("Characters from file: ");
    int ch;
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c ", ch);
    }
    printf("\n");
    
    fclose(fptr);
}

int main() {
    printf("=== FILE MANAGEMENT IN C ===\n\n");
    
    printf("1. Write to File:\n");
    write_to_file();
    
    printf("\n2. Read from File:\n");
    read_from_file();
    
    printf("\n3. Append to File:\n");
    append_to_file();
    
    printf("\n4. Write Records to File:\n");
    write_records_to_file();
    
    printf("\n5. Read Records from File:\n");
    read_records_from_file();
    
    printf("\n6. Random Access to Binary File:\n");
    random_access_demo();
    
    printf("\n7. File Operations Demo:\n");
    file_operations_demo();
    
    printf("\n8. Character Input/Output to File:\n");
    character_io_demo();
    
    printf("\n=== All demonstrations completed ===\n");
    
    return 0;
}

// Weekend work session on 2022-04-10 - Code review and updates

// Weekend work session on 2022-03-20 - Code review and updates

// Week 5 update

// Week 5 update

// Week 5 update

// Week 5 update

// Week 5 update

// Week 5 update

// Week 5 update

// Week 5 update