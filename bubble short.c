#include <stdio.h>
void main ()
{
    int a [40] , n , i ,j, temp;
    printf("Enter size of array :");
    scanf("%d", &n);
    printf("enter %d elements :" , n);

    for (i=0 ; i<n; i++)
    {
        scanf("%d" , &a [i]);
    }
    for (i=1; i<(n-1); i++)
    {
        for(j=0 ; j<(n-i); j++)
       {
        if(a[j]>a[j+1])
        {
            temp= a[j];
            a[j]= a[j+1];
            a[j+1]= temp;
        }
    }
  }
    printf("Sorted array is : ");
    for (i=0 ; i<n ; i++)
    printf("%d\t" , a[i]);

    getchar();

}
