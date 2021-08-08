#include <stdio.h>
int main()
{
    int minute, hour, day, week, month;
    int minutes, hours, days, weeks, months;

    printf("Enter Minutes : ");
    scanf("%d", &minutes);
    
    minute = 1;
    hour = minute * 60;
    day = hour * 24;
    week = day * 7;
    month = day * 30;

    months = minutes / month;
    minutes = minutes - (months * month);
    weeks = minutes / week;
    minutes = minutes - (weeks * week);
    days = minutes / day;
    minutes = minutes - (days * day);
    hours = minutes / hour;
    minutes = minutes - (hours * hour);

    printf("Months  : %d\n", months);
    printf("Weeks   : %d\n", weeks);
    printf("Days    : %d\n", days);
    printf("Hours   : %d\n", hours);
    printf("Minutes : %d\n", minutes);

    return 0;
}