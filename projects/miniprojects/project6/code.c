#include <stdio.h>                                                              
#include <stdlib.h>        
#include <string.h>

// Structure to store student information
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function prototypes
void addStudent();
void displayStudents();
void searchStudent();
void deleteStudent();

const char* FILE_NAME = "students.dat";

int main() {
    int choice;

    while (1) {
        printf("\n=== STUDENT RECORD MANAGEMENT SYSTEM ===\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Delete Student Record\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: printf("Exiting program. Goodbye!\n"); exit(0);
            default: printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Function to add a new student record to the file
void addStudent() {
    FILE *file = fopen(FILE_NAME, "ab"); // Open in append binary mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    struct Student s;
    printf("\nEnter Roll Number: ");
    scanf("%d", &s.rollNumber);
    getchar(); // Clear newline character from buffer
    printf("Enter Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = 0; // Remove newline character
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(struct Student), 1, file);
    fclose(file);
    printf("Record added successfully!\n");
}

// Function to display all student records
void displayStudents() {
    FILE *file = fopen(FILE_NAME, "rb"); // Open in read binary mode
    if (file == NULL) {
        printf("\nNo records found. Please add a student first.\n");
        return;
    }

    struct Student s;
    printf("\n%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    printf("-----------------------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, file)) {
        printf("%-10d %-20s %-10.2f\n", s.rollNumber, s.name, s.marks);
    }
    fclose(file);
}

// Function to search for a student by roll number
void searchStudent() {
    FILE *file = fopen(FILE_NAME, "rb");
    if (file == NULL) {
        printf("\nNo records found.\n");
        return;
    }

    int roll, found = 0;
    struct Student s;
    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(struct Student), 1, file)) {
        if (s.rollNumber == roll) {
            printf("\nRecord Found:\n");
            printf("Roll Number: %d\n", s.rollNumber);
            printf("Name       : %s\n", s.name);
            printf("Marks      : %.2f\n", s.marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with Roll Number %d not found.\n", roll);
    }
    fclose(file);
}

// Function to delete a student record
void deleteStudent() {
    FILE *file = fopen(FILE_NAME, "rb");
    if (file == NULL) {
        printf("\nNo records found.\n");
        return;
    }

    FILE *tempFile = fopen("temp.dat", "wb");
    if (tempFile == NULL) {
        printf("Error creating temporary file!\n");
        fclose(file);
        return;
    }

    int roll, found = 0;
    struct Student s;
    printf("\nEnter Roll Number to delete: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(struct Student), 1, file)) {
        if (s.rollNumber == roll) {
            found = 1; // Skip writing this record to copy it out
        } else {
            fwrite(&s, sizeof(struct Student), 1, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove(FILE_NAME);        // Delete original file
    rename("temp.dat", FILE_NAME); // Rename temp file to original

    if (found) {
        printf("Record deleted successfully!\n");
    } else {
        printf("Record not found.\n");
    }
}




/* #include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

// Structure to store student details
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Global variables to track the database
struct Student students[MAX_STUDENTS];
int studentCount = 0;

// Function prototypes
void addStudent();
void displayStudents();
void searchStudent();

int main() {
    int choice;

    while (1) {
        printf("\n=== STUDENT RECORD SYSTEM ===\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Function to add a student record
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Database full! Cannot add more students.\n");
        return;
    }

    struct Student s;
    printf("\nEnter Roll Number: ");
    scanf("%d", &s.rollNumber);
    
    // Clear input buffer before reading string
    getchar(); 
    printf("Enter Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = 0; // Remove newline character

    printf("Enter Marks: ");
    scanf("%float", &s.marks);

    students[studentCount] = s;
    studentCount++;
    printf("Record added successfully!\n");
}

// Function to display all records
void displayStudents() {
    if (studentCount == 0) {
        printf("\nNo records found.\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    printf("%-10s %-30s %-10s\n", "Roll No", "Name", "Marks");
    for (int i = 0; i < studentCount; i++) {
        printf("%-10d %-30s %-10.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }
}

// Function to search for a specific student
void searchStudent() {
    if (studentCount == 0) {
        printf("\nNo records available to search.\n");
        return;
    }

    int targetRoll;
    printf("\nEnter Roll Number to search: ");
    scanf("%d", &targetRoll);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == targetRoll) {
            printf("\nRecord Found:\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }
    printf("Student with Roll Number %d not found.\n", targetRoll);
} */
