#include <stdio.h>

/*
    Your fizzbuzz implementation should initialize a counter, then
    iterate n times. If the ith iteration is divisible by 3, print
    "Fizz". If it's divisible by 5, print "Buzz". If it's divisible
    by both 3 and 5, print "FizzBuzz". Increment the counter variable
    every time that nothing gets printed and return the counter.
*/
int fizzbuzz(int n)
{
    int x;
    int y=0;
    for (x=1; x<n+1; x++)
    {
        if (x%3==0)
            printf("fizz");
        if (x%5==0)
            printf("buzz");
        if (x%3==0 || x%5==0)
            printf("\n");
        if (!(x%3==0) && !(x%5==0))
            y = y+1;
    }
    return y;
}

#ifndef TESTING
int main(void)
{
    fizzbuzz(20);

    return 0;
}
#endif