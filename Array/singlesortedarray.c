#include <stdio.h>
int main()
{
    int i,j=0, n1, n2, n3,temp;
    printf("Enter the size of array1:");
    scanf("%d", &n1);
    printf("Enter the size of array2:");
    scanf("%d", &n2);
    int a[n1],b[n2];
    for (i = 0; i < n1; i++)
    {
        printf("Enter the %d element of an array ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n2; i++)
    {
        printf("Enter the %d element of an array ", i + 1);
        scanf("%d", &b[i]);
    }
    n3=n1+n2;
    int c[n3];
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }

    for(i=n1;i<n3;i++)
    {
            c[i]=b[j];
            j=j+1;
    }
    for(i=0;i<n3;i++)
    {
        for(j=i+1;j<n3;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }

        }
    }
    printf("New Array:");
    for (i = 0; i < n3; i++)
    {
        printf("%d \t", c[i]);
    }
    return 0;
}

