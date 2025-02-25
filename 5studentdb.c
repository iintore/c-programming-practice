#include <stdio.h>

// Structure to store student details
typedef struct {
    char name[50];
    float subj1, subj2, subj3;
    char grade;
} Student;

// Function to calculate grade based on average score
char calculateGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

int main() {
    Student students[5];
    int i;
    
    // Input student details
    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %49[^"]", students[i].name);
        printf("Enter marks for Subject 1: ");
        scanf("%f", &students[i].subj1);
        printf("Enter marks for Subject 2: ");
        scanf("%f", &students[i].subj2);
        printf("Enter marks for Subject 3: ");
        scanf("%f", &students[i].subj3);
        
        float avg = (students[i].subj1 + students[i].subj2 + students[i].subj3) / 3.0;
        students[i].grade = calculateGrade(avg);
    }
    
    // Display student records
    printf("\nStudent Records:\n");
    printf("-----------------------------------------\n");
    printf("Name\t	Subj1\tSubj2\tSubj3\tGrade\n");
    printf("-----------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%s\t%.2f\t%.2f\t%.2f\t%c\n", students[i].name, students[i].subj1, students[i].subj2, students[i].subj3, students[i].grade);
    }
    
    return 0;
}