#include <stdio.h>
int main()
{
    int days, day, year, month, week;
    printf("How many Days do you want to Convert : ");
    scanf("%d",&days);
    year=days/365;
    days=days-(year*365);
    month=days/30;
    days=days-(month*30);
    week=days/7;
    days=days-(week*7);
    day=days;
    printf("year : %d\n",year);
    printf("month: %d\n",month);
    printf("week : %d\n",week);
    printf("days : %d\n",days);
    return 0;
}