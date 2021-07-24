#include <stdio.h>
int main()
{
    
    float feet, weight, bmi,sim;
    char repeat[68];
    do{
    printf("\nEnter Your Height(In Feet): ");
    scanf("%f",&feet);
    printf("\nEnter Your Weight(In Kg)  : ");
    scanf("%f",&weight);
    printf("\nYour Height is %.1f feet and Your Weight is %.0f Kg\n",feet, weight);
    printf("Are You Sure Above Detail Is Correct(1 = yes /0 = no ) : ");
    scanf("%s",repeat);
    }while(repeat != 64);
    return 0;
}
