#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number;
    srand(time(0));
    number=rand()%100 + 1; //Generates a random number between 1 to 100(1 because of +1)
    printf("The number is %d", number);

    return 0;
}
