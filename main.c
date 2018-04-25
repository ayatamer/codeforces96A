#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, j=0;
    int k;
    char ppl[100];
    scanf("%s", ppl);
    for(k=0; k<100; k++)
    {
        if(ppl[k]=='\0')
            break;
        if(ppl[k]=='1')
        {
            j=0;
            i++;
            if(i>6)
            {
                printf("YES");
                return 0;
            }
        }
        else if(ppl[k]=='0')
        {
            i=0;
            j++;
            if(j>6)
            {printf("YES");
            return 0;}
        }
    }
    printf("NO");
    return 0;
}
