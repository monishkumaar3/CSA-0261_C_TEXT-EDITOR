#include <stdio.h>
#include <time.h>
struct student {
    char name[50];
    int roll_num;
    struct tm birthday;
    struct tm admission_date;
};
int main() {
    struct student s;
    time_t now = time(NULL);
    printf("Enter student's name: ");
    fgets(s.name, 50, stdin);
    printf("Enter student's roll number: ");
    scanf("%d", &s.roll_num);
    printf("Enter student's birthday in the format YYYY/MM/DD: ");
    scanf("%d/%d/%d", &s.birthday.tm_year, &s.birthday.tm_mon, &s.birthday.tm_mday);
    printf("Enter student's admission date in the format YYYY/MM/DD: ");
    scanf("%d/%d/%d", &s.admission_date.tm_year, &s.admission_date.tm_mon, &s.admission_date.tm_mday);
    double age_in_seconds = difftime(mktime(&s.admission_date), mktime(&s.birthday));
    int age_in_years = (int)(age_in_seconds / (60 * 60 * 24 * 365.25));
    printf("\nName: %s", s.name);
    printf("Roll Number: %d\n", s.roll_num);
    printf("Age at time of admission: %d years\n", age_in_years);
    return 0;
}
