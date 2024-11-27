//95) Employee Details

#include <stdio.h>
#include <string.h>

struct Employee 
{
    int empNo;
    char name[50];
    float basicPay;
};

void readEmployee(struct Employee *emp) 
{
    printf("Enter employee number: ");
    scanf("%d", &emp->empNo);
    printf("Enter employee name: ");
    scanf(" %s", emp->name);
    printf("Enter basic pay: ");
    scanf("%f", &emp->basicPay);
}

void displayEmployee(struct Employee *emp) 
{
    printf("Employee No: %d, Name: %s, Basic Pay: %f\n", emp->empNo, emp->name, emp->basicPay);
}

int main() 
{
    struct Employee employees[50];
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        printf("Enter details for employee %d:\n", i + 1);
        readEmployee(&employees[i]);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) 
    {
        displayEmployee(&employees[i]);
    }

    return 0;
}
