#include<stdio.h>
int main(void)
{
    char targetChar;
    int sourceInt = 99;
    double sourceDouble = 55.67;
    targetChar = (char)sourceInt;
    targetChar = sourceDouble;
    printf("Source int %d, Source double, %.2f, target %c\n", sourceInt, sourceDouble,targetChar);
}