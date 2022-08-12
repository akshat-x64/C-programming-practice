#include <stdio.h>

struct studata
{
    int roll;
    char name[50];
    char depart[50];
    char course[20];
    int yoj;
} nos[450] = {03, "kishore", "IT","tech",2014,
                             10,
              "Mohammad siraj Alam", "Computer Science", "B.Tech", 2014,
              53, "Deepak", "Computer Application", "BCA", 2013,
              13, "Karan", "Mechanical", "Diploma", 2013,
              1, "Aakash", "Tool and Die", "Diploma", 2012,
              2, "Ramesh", "IT", "B.tech", 2014};
void student_in_year(int year)
{
    int i;
    printf("\n\t\tyear of joining :%d\n\n", year);
    for (i = 0; i <= 450; i++)
    {
        if (nos[i].yoj == year)
        {
            printf("\nRol Number : %d", nos[i].roll);
            printf("\nName :%s", nos[i].name);
            printf("\nDepartment :%s", nos[i].depart);
            printf("\nCourse : %s\n", nos[i].course);
        }
    }
}
void student_data(int enroll)
{
    int i;
    printf("\nRoll number :%d", enroll);
    for (i = 0; i <= 450; i++)
    {
        if (nos[i].roll == enroll)
        {
            printf("\nName : %s", nos[i].name);
            printf("\nDepartment : %s", nos[i].depart);
            printf("\nCourse :%s\n", nos[i].course);
            printf("\nYear pf joining : %d\n", nos[i].yoj);
        }
    }
}
int main()
{
    int yoj, roll;
    printf("\nenter year of joining of the student:");
    scanf("%d", &yoj);
    student_in_year(yoj);
    printf("\nEnter the roll number of the student you want data:");
    scanf("%d", &roll);
    student_data(roll);
    return 0;
}