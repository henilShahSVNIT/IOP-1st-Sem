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
    FILE *file = fopen("LNMIITSTUDENT.DAT", "wb");
    if (file == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }

    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    for (int i = 0; i < n; i++) 
    {
        printf("Enter details for student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Total Marks: ");
        scanf("%f", &students[i].totalMarks);

        fwrite(&students[i], sizeof(struct Student), 1, file);
    }

    fclose(file);
    printf("Student details saved to LNMIITSTUDENT.DAT\n");

    return 0;
}
