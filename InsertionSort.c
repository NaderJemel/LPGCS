#include <stdio.h>
void insertion(int t[], int n);
void printable(int t[], int n);
int main()
{
    int t[] = {15,3,19,20,111,22,15,10,5,};
    int n = sizeof(t) / sizeof(t[0]);
    insertion(t, n);
    printable(t, n);
}

void insertion(int t[], int n)
{   int i,j;
    for (i=1; i<n; i++)
    {
        int now = t[i];
        for(j=i; j>0 && t[j-1]>now; j--)
        {
            t[j] = t[j-1];
        }
    t[j] = now;
    }
}

void printable(int t[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%i,   ",t[i]);
    }
}
