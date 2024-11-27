//73) Program to Count Votes in an Election with 5 Candidates

#include <stdio.h>

int main() 
{
    int votes[5] = {0}, ballot, spoilt = 0, n;

    printf("Enter the number of ballots ");
    scanf("%d", &n);

    printf("Enter the candidate numbers (1 to 5) on each ballot\n");
    for( int i = 0; i < n; i++ ) 
    {
        scanf("%d", &ballot);
        if( ballot >= 1 && ballot <= 5 ) 
        {
            votes[ballot - 1]++;
        } 
        else 
        {
            spoilt++;
        }
    }

    printf("Votes for each candidate\n");
    for( int i = 0; i < 5; i++ ) 
    {
        printf("Candidate %d: %d votes\n", i + 1, votes[i]);
    }
    printf("Spoilt ballots: %d\n", spoilt);

    return 0;
}
