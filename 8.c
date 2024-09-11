#include <stdio.h>

int main()
{
    int days,hours,min,sec,time;
    time= 31558150;
    printf("EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS. THAT IS \n");
    days = time / 86400;
    time -= (days*86400);
    hours = time / 3600;
    time -= (hours*3600);
    min = time / 60;
    time -= (min*60);
    sec = time;
    printf("%d",days);
    printf("DAYS %d",hours);
    printf("HOURS %d",min);
    printf("MIN AND %d" , sec);
    printf("SECONDS!");
	return 0;
}
