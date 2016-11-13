#include <stdio.h>

void printT(int t[], int n);
void main()
{
    int i,j;
    int t[] = {15,3,19,20,111,22,15,10};
    int n = sizeof(t)/sizeof(t[0]);
    for(i=0; i<n; i++)
    {
        int ind_min = i;
        for (j= i+1; j<n;j++)
        {
            if(t[ind_min] > t[j])
            {
                ind_min = j;
            }
        }
        if(t[i] != t[ind_min])
        {
            int v = t[i];
            t[i] = t[ind_min];
            t[ind_min] = v;
        }
    }
    printT(t,n);
}

void printT(int t[],int n)
{
    int i;

    for(i =0; i<n;i++)
    {
        printf("%i\n",t[i]);
    }
}
