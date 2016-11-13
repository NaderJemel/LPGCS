#include <stdio.h>

void swap(int t[], int i, int j);
void printT(int t[],int n);
int main(void)
{
    int i;
    int t[] = {15,3,19,20,111,22,15,10};
    int n = sizeof(t)/sizeof(t[0]);
    int n1 = n;
    int test;
    do{
        test = 0;
        for(i=0; i<n-1;i++)
        {
            if(t[i]>t[i+1])
            {
                swap(t,i,i+1);
                test = 1;
            }
        }
        n--;
    }while(test == 1 || n > 1);
    printT(t, n1);
}
void swap(int t[], int i, int j)
{
    int a = *(t+i);
    *(t+i) = *(t+j);
    *(t+j) = a;
}
void printT(int t[],int n)
{
    int i;

    for(i =0; i<n;i++)
    {
        printf("%i\n",t[i]);
    }
}
