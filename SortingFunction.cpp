#include<iostream>

using namespace std;

#include"SortingFunction.h"

//function with pointer array and int num as parameter
void sortingFunction(int *arr, int num)
{
    cout<<" The entered numbers are "<<endl;
    for(int i=0;i<num;i++)
    {
        //output of numbers before sorting.
        cout<<" "<<arr[i]<<" ";
    }
    cout<<endl;

    // sorting algorithm
    cout<<" The numbers sorted are "<<endl;
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        //output
        cout<<" "<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<" The smallest number is "<<arr[0]<<endl;
    cout<<" The largest number is "<<arr[num-1]<<endl;
}
