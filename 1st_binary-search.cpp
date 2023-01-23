#include <iostream>
#include <string>
using namespace std;

int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else
            end=mid-1;
        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int even[6]={2,4,6,8,10,12};
    int odd[5]={3,8,11,14,16};

    int index=binarysearch(even,6,12);

    cout<<"Index of 12 is "<<index<<endl;

    int index2=binarysearch(odd,5,14);

    cout<<"Index of 14 is "<<index2<<endl;
}