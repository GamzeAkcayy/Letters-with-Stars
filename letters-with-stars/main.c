#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boyut,i,j;
    printf("Lutfen boyut degeri giriniz:");
    scanf("%d",&boyut);
//A HARFI
    if(boyut>0)
    {
        for(i=0;i<boyut;i++)
        {
            for(j=0;j<boyut;j++)
            {
                if(i==0 || j==0 || j==boyut-1 || i==boyut/2)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n\n\n");
//K HARFI
        for(i=0;i<boyut;i++)
        {
            for(j=0;j<boyut;j++)
            {
                if(j==0 || j==i && i>=boyut/2 || i==boyut-j-1 && i<=boyut/2 || i==boyut/2 && j<boyut/2)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n\n\n");

//C HARFI
        for(i=0;i<boyut;i++)
        {
            for(j=0;j<boyut;j++)
            {
                if(i==0 || i==boyut-1 || j==0)
                {
                   printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n\n\n");
//A HARFI
        for(i=0;i<boyut;i++)
        {
            for(j=0;j<boyut;j++)
            {
                if(i==0 || j==0 || j==boyut-1 || i==boyut/2)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n\n\n");
// Y HARFI
        for(i=0;i<boyut;i++)
        {
            for(j=0;j<boyut;j++)
            {
                if(j==boyut-1 || i==boyut-1 || i==boyut/2 || j==0 && i<=boyut/2)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n\n\n");
// K HARFI
        for(i=0;i<boyut;i++)
        {
            for(j=0;j<boyut;j++)
            {
                if(j==0 || j==i && i>=boyut/2 || i==boyut-j-1 && i<=boyut/2 || i==boyut/2 && j<boyut/2)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n\n\n");
//O HARFI
        for(i=0;i<boyut;i++)
        {
            for(j=0;j<boyut;j++)
            {
                if(i==0 || i==boyut-1 || j==0 || j==boyut-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n\n\n");
// N HARFI
    for(i=0;i<boyut;i++)
     {
        for(j=0;j<boyut;j++)
        {
            if(j==0 || i>=boyut/2 && i==j || i<=boyut/2 && i==j || j==boyut-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
     }
     printf("\n\n\n");

// Y HARFI
        for(i=0;i<boyut;i++)
        {
            for(j=0;j<boyut;j++)
            {
                if(j==boyut-1 || i==boyut-1 || i==boyut/2 || j==0 && i<=boyut/2)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }

            }
            printf("\n");
        }
        printf("\n\n\n");
// A HARFI
    for(i=0;i<boyut;i++)
        {
            for(j=0;j<boyut;j++)
            {
                if(i==0 || j==0 || j==boyut-1 || i==boyut/2)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n\n\n");
    }
    else
    {
        printf("Pozitif tam sayi giriniz.");
    }
    return 0;
}
