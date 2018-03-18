#include<iostream>
using namespace std;

int main()
{
    int A[6];
    int temp,i,k,j;
    int n=6; // Number of elements
    int flag=0;
    int m=0;
    cout<<"Enter elements to be sorted\n";
    for(i=0; i<6; i++)
    {
        cin>>A[i];
    }
    temp=A[0];
    for(k=0; k<n-1; k++)
    {
        flag=0;
        for(i=0; i<n-k-1; i++)
        {

            if(A[i]>A[i+1])
            {
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
                flag=1;
            }

        }

         cout<<"\nAfter pass "<< m+1<< "\n";
            for(j=0; j<6; j++){
            cout<< A[j]<< " ";
            }
            m++;
        if(flag == 0)
            {
        cout<<"\nIt's already sorted after phase "<<i;
        break;
            }

    }
    cout<<"\nThe sorted array is \n";
    for(i=0; i<6; i++)
        cout<<A[i]<< " ";
    return 0;
}
