#include <stdio.h>

int main()

{
    int a,b,c,lar,seclar;

    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
            lar=a;
        else
            seclar=a;
    }

    if(b>c)
    {
        if(b>a)
            lar=a;
        else
            seclar=b;
    }
    if(c>a)
    {
        if(c>b)
            lar=c;
        else
            seclar=c;
    }
    printf("second largest number :%d",seclar);


}
