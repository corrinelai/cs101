#include <stdio.h>

int main() {
    int year = 2022;
    if(year%400==0)
        printf("year %d is leap year\n", year);
    else if((year%4==0)&&(year%100!=0))
        printf("year %d is leap year\n", year);
    else
        printf("year %d is not leap year\n", year);
    return 0;
}
