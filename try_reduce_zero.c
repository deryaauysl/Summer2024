/* DONEEEEE!! */

#include <stdio.h>

int countProcess(int num)
{
    int flag = 1;
    int count = 0;

    if (num == 0)
    {
        return 0;
    }

    while (flag)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
            count++;
        }
        else if (num % 2 == 1)
        {
            num = num - 1;
            count++;
        }

        if (num == 0)
        {
            flag = 0;
        }
    }
    return count;
}

int main()
{
    int num;
    printf("Input:");
    scanf("%d", &num);
    int countnum = 0;

    countnum = countProcess(num);
    printf("Output: %d", countnum);
}