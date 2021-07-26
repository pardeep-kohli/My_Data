#include <stdio.h>
int main()
{
    int less, many, again, Enrollment;
    int fail1, fail2, fail3, fail4, fail5, fail6, fail;
    float mark1, mark2, mark3, mark4, mark5, mark6, total;
    char sub1[20], sub2[20], sub3[20], sub4[20], sub5[20], sub6[20], sub7[20];
    char status1[4];
    char Name[20];
    printf("Enter You Name           : ");
    scanf("%s", &Name);
    printf("Enter You Enrollment No. : ");
    scanf("%d", &Enrollment);
    do
    {
        printf("How Many Subjects Do You Have? : ");
        scanf("%d", &many);
        less = many;
        if (many > 0)
        {
            printf("Enter Your Subject with Mark( Eg. Hindi 40) : ");
            scanf("%s %f", &sub1, &mark1);
            many--;
        }
        if (many > 0)
        {
            printf("Enter Your Subject with Mark( Eg. Hindi 40) : ");
            scanf("%s %f", &sub2, &mark2);
            many--;
        }
        if (many > 0)
        {
            printf("Enter Your Subject with Mark( Eg. Hindi 40) : ");
            scanf("%s %f", &sub3, &mark3);
            many--;
        }
        if (many > 0)
        {
            printf("Enter Your Subject with Mark( Eg. Hindi 40) : ");
            scanf("%s %f", &sub4, &mark4);
            many--;
        }
        if (many > 0)
        {
            printf("Enter Your Subject with Mark( Eg. Hindi 40) : ");
            scanf("%s %f", &sub5, &mark5);
            many--;
        }
        if (many > 0)
        {
            printf("Enter Your Subject with Mark( Eg. Hindi 40) : ");
            scanf("%s %f", &sub6, &mark6);
            many--;
        }
        do
        {
            printf("Are You Sure Above Details Are Correct(y=1/n=0) : ");
            scanf("%d", &again);
            if (again == 1)
            {
            }
            else if (again == 0)
            {
                mark1 = 0, mark2 = 0, mark3 = 0, mark4 = 0, mark5 = 0, mark6 = 0;
                continue;
            }
            else
            {
                printf("Invalid Input!, Please Enter the Correct Value\n");
            }
        } while (again != 1 && again != 0);
    } while (again != 1);
    total = mark1 + mark2 + mark3 + mark4 + mark5 + mark6;
    float percentage = (100 * total) / (less * 100);
    printf("+====================================+\n");
    printf("| NAME          :  | %s           \n", Name);
    printf("+====================================+\n");
    printf("| ENROLLMENT NO.:  | %d     \n", Enrollment);
    printf("+====================================+\n");
    printf("| STATUS        :  | ");
    if (mark1 < 33 && mark1 >= 1)
    {
        printf("FAIL\n");
    }
    else if (mark2 < 33 && mark2 >= 1)
    {
        printf("FAIL\n");
    }
    else if (mark3 < 33 && mark3 >= 1)
    {
        printf("FAIL\n");
    }
    else if (mark4 < 33 && mark4 >= 1)
    {
        printf("FAIL\n");
    }
    else if (mark5 < 33 && mark5 >= 1)
    {
        printf("FAIL\n");
    }
    else if (mark6 < 33 && mark6 >= 1)
    {
        printf("FAIL\n");
    }
    else
    {
        printf("PASS\n");
    }
    printf("+====================================+\n");
    printf("| TOTAL         :  | %.0f/%d \n", total, (less * 100));
    printf("+====================================+\n");
    printf("| PERCENTAGE    :  | %.1f %\n", percentage);
    printf("+====================================+\n");
    if (mark1 < 33 && mark1 >= 1)
    {
        printf("%s, ", sub1);
        fail=1;
    }
    if (mark2 < 33 && mark2 >= 1)
    {
        printf("%s, ", sub2);
        fail=1;
    }
    if (mark3 < 33 && mark3 >= 1)
    {
        printf("%s, ", sub3);
        fail=1;
    }
    if (mark4 < 33 && mark4 >= 1)
    {
        printf("%s, ", sub4);
        fail=1;
    }
    if (mark5 < 33 && mark5 >= 1)
    {
        printf("%s, ", sub5);
        fail=1;
    }
    if (mark6 < 33 && mark6 >= 1)
    {
        printf("%s\n", sub6);
        fail=1;
    }
    if (fail == 1)
    {
        printf("\n");
    }
    else
    {
        printf("None;\n");
    }

    return 0;
}
