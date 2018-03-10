#include<iostream>
using namespace std;
int a[50];
int merges(int high,int low,int mid)
{
   int i=low;
   int k=low;
   int j=mid+1;
   int b[50];
   while(i<=mid && j<=high)
   {
       if(a[i]<a[j])
       {
           b[k]=a[i];
           i++;
       }
       else
       {
           b[k]=a[j];
           j++;
       }
       k++;
   }
   while(i<=mid)
   {
        b[k]=a[i];
           i++;
           k++;
   }
   while(j<=high)
   {
        b[k]=a[j];
           j++;
           k++;
   }
   for(i=low;i<k;i++)
      a[i]=b[i];

   return 0;

}

int mergesort(int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(low,mid);
        mergesort(mid+1,high);
        merges(high,low,mid);
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter number of elements:\t";
    cin >> n;
     cout<<"Enter elements:\n";
     for(int i=0;i<n;i++)
    cin >> a[i];
     cout<<"Unsorted array is:\n";
     for(int i=0;i<n;i++)
    cout<< a[i];
    cout<<endl;
    mergesort(0,n-1);
     cout<<"Sorted array:\n";
     for(int i=0;i<n;i++)
    cout<< a[i];
    return 0;
}
