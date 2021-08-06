#include <stdio.h>
int table (int num, int i);
int main()
{
    int num, i=0;
    printf("Enter the value for printing the table:");
    scanf("%d",&num);
    table (num,1);

}
int table (int n, int b){
    printf("\n");
     printf("%d X %d = %d",n,b,n*b);
    if(b<10){
      int r = table(n,b+1);
      return r;
    }

}