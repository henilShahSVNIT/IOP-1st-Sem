#include <stdio.h>
#include <stdlib.h>

struct Student 
{
    int rollNo;
    char name[50];
    float totalMarks;
};

int main() 
{
    FILE *file = fopen("LNMIITSTUDENT.DAT", "ab");
    if (file == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }

    int n;
    printf("Enter the number of students to append: ");
    scanf("%d", &n);

    struct Student student;
    for (int i = 0; i < n; i++) 
    {
        printf("Enter details for student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &student.rollNo);
        printf("Name: ");
        scanf("%s", student.name);
        printf("Total Marks: ");
        scanf("%f", &student.totalMarks);

        fwrite(&student, sizeof(struct Student), 1, file);
    }

    fclose(file);
    printf("Student details appended to LNMIITSTUDENT.DAT\n");

    return 0;
}
