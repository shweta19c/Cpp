#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int getRandomNumber(void)
{
    int random1000 = rand() % 1000 + 1;
    return random1000;
}

int main(void)
{
  srand(time(NULL));
  int randomNumber= getRandomNumber();
  printf("Random number between 1 to 1000 is:%d\n", randomNumber);
}