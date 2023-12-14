#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int getRandomNumber(int maxNumber)
{
    int randomNumber = rand()% maxNumber + 1;
    return randomNumber;
}
int main(void)
{
    srand(time(NULL));
    int randomNumber = getRandomNumber(100);
    printf("Random number is:%d\n", randomNumber);
}