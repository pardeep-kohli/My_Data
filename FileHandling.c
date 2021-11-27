#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    int rno;
    char name[20];
    struct subject
    {
        int scode;
        char sname[20];
        int mark;
    } sub[3];
    int total;
    float per;
} student;

void create()
{
    student *s;
    FILE *fp;
    int n, i, j;
    printf("How Many Student You Want : ");
    scanf("%d", &n);
    s = (student *)calloc(n, sizeof(student));
    fp = fopen("mystudents.txt","w");
    for (int i = 0; i < n; i++)
    {
        s[i].total = 0;
        s[i].per = 0;
        printf("Enter Roll NO. : ");
        scanf("%d", &s[i]);
        // fflush(stdin);
        printf("Enter Name : ");
        scanf("%[^\n]s", s[i].name);
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Marks of Subject %d : ", j + 1);
            scanf("%d", &s[i].sub[j].mark);
            s[i].total += s[i].sub[j].mark;
        }
        s[i].per =s[i].total/3.0;
        fwrite(&s[i], sizeof(student), 1, fp);
    }
    fclose(fp);
};
void display(){
    student s1;
    FILE *fp;
    fp = fopen("mystudents.txt","r");
    while (fread(&s1,sizeof(student),1,fp))
    {
        printf("\n%-5d%-20s",s1.rno,s1.name);
        for (int j = 0; j < 3; j++)
        {
            printf("%4d",s1.sub[j].mark);
        }
        printf("%5d %7.2f %",s1.total,s1.per);
    }
    
};
void append(){};

int main()
{
    int ch;
    do
    {
        printf("\n1.CREATE");
        printf("\n2.DISPLAY");
        printf("\n3.APPEND");
        printf("\n0.EXIT\n");

        printf("Enter Your Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            append();
            break;
        }

    } while (ch != 0);

    return 0;
}