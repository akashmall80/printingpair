//Printing pair of an array
//{1,2,3,4}
//pairs are (1,2) (1,3) (1,4)  (2,3) (2,4) (3,4)
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
        cout<<endl;
    }

    return 0;
}
