#include <stdio.h>

int main() 
{
    int rollNo[10], subject1[10], subject2[10], subject3[10];
    int total[10], highestSubject1 = 0, highestSubject2 = 0, highestSubject3 = 0;
    int highestRollNoSubject1 = 0, highestRollNoSubject2 = 0, highestRollNoSubject3 = 0;
    int highestTotal = 0, highestTotalRollNo = 0;
    
    printf("Enter the Roll No., Subject 1 marks, Subject 2 marks, and Subject 3 marks for the students \n");
    
    for( int i = 0; i < 10; i++ ) 
    {
        printf("Roll No: ");
        scanf("%d", &rollNo[i]);
        printf("Subject 1 marks: ");
        scanf("%d", &subject1[i]);
        printf("Subject 2 marks: ");
        scanf("%d", &subject2[i]);
        printf("Subject 3 marks: ");
        scanf("%d", &subject3[i]);

        total[i] = subject1[i] + subject2[i] + subject3[i];
        
        if( subject1[i] > highestSubject1 ) 
        {
            highestSubject1 = subject1[i];
            highestRollNoSubject1 = rollNo[i];
        }

        if( subject2[i] > highestSubject2 ) 
        {
            highestSubject2 = subject2[i];
            highestRollNoSubject2 = rollNo[i];
        }

        if( subject3[i] > highestSubject3 ) 
        {
            highestSubject3 = subject3[i];
            highestRollNoSubject3 = rollNo[i];
        }

        if( total[i] > highestTotal ) 
        {
            highestTotal = total[i];
            highestTotalRollNo = rollNo[i];
        }
    }

    printf("\nTotal marks obtained by each student:\n");
    for( int i = 0; i < 10; i++ ) 
    {
        printf("Roll No %d got %d Total Marks \n", rollNo[i], total[i]);
    }

    printf("\nHighest marks in Subject 1 is %d  by Roll No: %d\n", highestSubject1, highestRollNoSubject1);
    printf("Highest marks in Subject 2 %d is Roll No: %d\n", highestSubject2, highestRollNoSubject2);
    printf("Highest marks in Subject 3 is %d by Roll No: %d\n", highestSubject3, highestRollNoSubject3);

    printf("\nStudent with the highest total marks is Roll No %d with Total Marks: %d\n", highestTotalRollNo, highestTotal);

    return 0;
}
