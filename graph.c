#include<stdio.h>
#include<conio.h>

void main ()
{
    int graph [4] [4], i,j;
    char cho;
    clearerr_s;
    for (i=0; i<4 ; i++)
    {
        for (j=0 ; j<4 ; j++)
        {
            if (i==j)
            {
                graph [i] [j] =0;
            }    
            else
            {printf("Is these any else between %d & %d\n" , i,j);
            scanf("%c" , &cho);}
            if (cho == 'y')
            {
            graph [i] [j] = 1;
            }
            else
            graph [i] [j] =0;
            
        }
    }

}