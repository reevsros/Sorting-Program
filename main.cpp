#include <iostream>

using namespace std;

#include "SortingFunction.h"
#include "SortingFunction.cpp"

int main()
{
    int num;
    cout<<" Enter the number of numbers you'd like to sort ";
    cin>>num;
    // initializing array pointer and dynamically allocating variable num
    int *arrPtr = new int[num];

    //input for the array using the pointer
    cout<<" Enter "<<num<<" numbers into the Sorting Array: ";
    for(int i=0;i<num;i++)
    {
        cin>>arrPtr[i];
    }


    //function call
    sortingFunction(arrPtr,num);
    return 0;
}
