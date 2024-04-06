#include <stdio.h>

struct Student {
    char name[50];
    int roll_number;
    float marks[5];
    float total_marks;
    float percentage;
};

void calculateResult(struct Student *student) {
    student->total_marks = 0;
    for (int i = 0; i < 5; i++) {
        student->total_marks += student->marks[i];
    }
    student->percentage = (student->total_marks / 500) * 100;
}

void displayResult(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll_number);
    printf("Marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: %.2f\n", i+1, student.marks[i]);
    }
    printf("Total Marks: %.2f\n", student.total_marks);
    printf("Percentage: %.2f%%\n", student.percentage);
}

int main() {
    struct Student student;
    
    printf("Enter student name: ");
    scanf("%s", student.name);
    
    printf("Enter roll number: ");
    scanf("%d", &student.roll_number);
    
    printf("Enter marks for 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &student.marks[i]);
    }
    
    calculateResult(&student);
    displayResult(student);
    
    return 0;
}
