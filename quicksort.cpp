#include<iostream>

using namespace std;
int comparisons=0;
int swaps=0;
int totc=0;
int tots=0;
int n=0;

int partition(int A[], int p, int r)
{
    int x,j,i,temp,k;
    x=A[r];
    cout<<"\nPivot selected = "<<x<<endl;
    i=p-1;

    for(int j=p; j<=r-1; j++)
    {
        comparisons++;
        if(A[j] < x)
        {
            i=i+1;
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            swaps++;

        }
    }
    temp=A[i+1];
    A[i+1]=A[r];
    A[r]=temp;
    swaps++;
    cout<<"\nIntermediate Array:\n";
    for(k=0; k<n; k++)
      {
        cout<<A[k]<<" ";
      }
    cout<<"\nNumber of comparisons = "<<comparisons;
    cout<<"\nNumber of swaps = "<<swaps<<endl;
    totc+=comparisons;
    tots+=swaps;
    return (i+1);
}

void quicksort(int A[], int p, int r)
{
    int q;
    if(p < r)
    {
        q=partition(A,p,r); //q represents sorted position
        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }
}


int main()
{
    int i;
    cout<<"Enter number of elements:\t";
    cin>>n;
    int A[n];
    cout<<"\nEnter elements for sorting:\n";
    for(i=0; i<n; i++)
        {
            cin>>A[i];
        }
    quicksort(A,0,n-1);
    cout<<"\n\nSorted Array is:\n";
     for(i=0; i<n; i++)
        {
            cout<<A[i]<<" ";
        }
    cout<<"\n\nTotal number of comparisons = "<<totc;
    cout<<"\nTotal number of swaps = "<<tots;
    return 0;
}

