#include<stdio.h>

int main()
{
    int i, j, temp, index, array[1001];

    scanf("%d", &index);
    for(i=0;i<index;i++)
    {
        scanf("%d", &array[i]);
    }

    for(i=0; i<index-1; i++)
    {
        for(j=i; array[j]>array[j+1] && j >= 0; j--)
        {
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
        }
    }

    for(i=0; i<index; i++)
    {
        printf("%d\n",array[i]);
    }
}
