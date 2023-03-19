
#include <stdio.h>

int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int get_num_days_in_month(int month, int year) {
    int num_days;
    switch (month) {
        case 2:
            num_days = is_leap_year(year) ? 29 : 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            num_days = 30;
            break;
        default:
            num_days = 31;
    }
    return num_days;
}

int get_day_of_week(int day, int month, int year) {
    int y = year;
    if (month < 3) {
        y--;
        month += 12;
    }
    int c = y / 100;
    int m = month - 3;
    int d = day;
    int w = (d + ((153 * m + 2) / 5) + (365 * y) + (y / 4) - (y / 100) + (y / 400) + 2) % 7;
    return w;
}

void print_calendar(int month, int year) {
    int num_days = get_num_days_in_month(month, year);
    int day_of_week = get_day_of_week(1, month, year);
    
    printf("  S  M  T  W  T  F  S\n");
    for (int i = 0; i < day_of_week; i++) {
        printf("   ");
    }
    for (int day = 1; day <= num_days; day++) {
        printf("%3d", day);
        if ((day_of_week + day) % 7 == 0) {
            printf("\n");
        }
    }
    printf("\n");
}

int main() {
    int month, year;
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    printf("\n");
    
    printf("     %d/%d\n", month, year);
    print_calendar(month, year);
    
    return 0;
}
