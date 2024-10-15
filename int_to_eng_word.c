
/* DONEEE 5 hane son */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printWords(int num, char *result)
{
    char *ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tens[] = {"", "twenty ", "thirty ", "fourty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "};

    if ((0 <= num) && (num < 20))
    {
        strcat(result, ones[num]);
        strcat(result, " ");
    }
    else if ((20 <= num) && (num < 100))
    {
        strcat(result, tens[(num / 10) - 1]);
        if (num % 10 != 0)
        {
            strcat(result, ones[num % 10]);
        }
    }
    else if ((100 <= num) && (num < 1000))
    {
        strcat(result, ones[(num / 100)]);
        strcat(result, " ");
        strcat(result, "hundred");
        strcat(result, " ");

        if (num % 100 != 0)
        {
            printWords(num % 100, result);
        }
    }
    else if ((1000 <= num) && (num < 1000000))
    {
        strcat(result, ones[num / 1000]);
        strcat(result, " ");
        strcat(result, "thousand");
        strcat(result, " ");

        if (num % 1000 != 0)
        {
            printWords(num % 1000, result);
        }
    }
}

int main()
{
    int num;
    char result[1024];

    printf("Enter a number to convert word\n");
    scanf("%d", &num);

    printWords(num, result);

    printf("Numbers in words is : %s\n", result);
}
