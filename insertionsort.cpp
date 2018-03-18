#include<iostream>
using namespace std;

int main()
{
   int A[6];int temp,i,j,m=0;

    cout<<"Enter elements to be sorted with Insertion Sort\n";
    for(i=0; i<6; i++)
      {
        cin>>A[i];
      }
    i=0;
    for(i=i; i<6; i++)
      {
        j=i;
        while(j>0 && A[j]<A[j-1])
          {
            temp=A[j];
            A[j]=A[j-1];
            A[j-1]=temp;
            j--;
          }
         cout<<"\nAfter pass "<< m+1<< "\n";
         for(j=0; j<6; j++)
            {
              cout<< A[j]<< " ";
            }
            m++;
      }
    cout<<"\nThe sorted array is \n";
    for(i=0; i<6; i++)
        cout<<A[i]<< " ";
    return 0;
}
