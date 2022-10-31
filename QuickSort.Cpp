#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int a[100];

void quicksort(int Pi , int l)
{
    int i , j;
    if(Pi<l)
    {
        i=Pi+1;
        j=l;
        while(a[i]<a[Pi])
        {
            i++;
        }
        while(a[j]>a[Pi])
        {
            j--;
        }
        while(i<j)
        {
            swap(a[i] , a[j]);
            while(a[i] < a[Pi])
            {
                i++;
            }
            while (a[j] > a[Pi])
            {
                j--;
            }
        }
        swap(a[j] , a[Pi]);
        quicksort(Pi , j-1);
        quicksort(j+1 , l);
    }
}
int main()
{
    int n;
    cout<<"Enter the number of numbers to sort: ";
    cin>>n;
    for(int i=0; i<n; i++)
        a[i]=rand()%100;
    cout<<"The unsorted number: ";
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

    cout<<endl;

    quicksort(0 , n-1);

    cout<<"The sorted numbers: ";
     for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

}
