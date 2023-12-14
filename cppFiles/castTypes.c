#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    double testScore = 95.60;
    int displayScore = 0;

    displayScore = (int)testScore;
    printf("Great work you got %d%% in your test\n", displayScore);
}