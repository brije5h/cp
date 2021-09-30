#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char ticketnumber[102];
        int count = 0, i;
        scanf("%s", ticketnumber);
        for (i = 0; i < strlen(ticketnumber); i++)
        {
            if (ticketnumber[i] == ticketnumber[i + 2] && ticketnumber[i] != ticketnumber[i+1])
            {
                count++
            }
        }
    }
    return 0;
}