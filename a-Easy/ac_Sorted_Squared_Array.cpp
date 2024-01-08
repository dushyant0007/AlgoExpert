#include<iostream>
using namespace std;

/*
 a input array is given containing integers sorted in ascending order
 return a new array containing squares of all the integers in the input array in sorted order 
*/

//example = [-7,-5,-4,3,6,8,9]

int* squareAndSort(int arr[], int n) {
    // create an empty array to store the squared values
    int *sqrArr = new int[n];
    int i = n-1;
    // take two pointers start->arr[0] and end->arr[n-1]
    // find the square of both and insert at the end of the new array(sqrArr)

    int start = 0;
    int end = n-1;

    while(start<end && i >= 0){
        int s_exp = arr[start]*arr[start];
        int e_exp = arr[end]*arr[end];

        if(s_exp > e_exp){
            sqrArr[i] = s_exp;
            start++;
        }
        else{
            sqrArr[i] = e_exp;
            end--;
        }
        i--;
    }

    for(int i  = 0 ; i < n ; i++)
        cout<<sqrArr[i]<<" ";
    
    return sqrArr;
}


int main()
{

    int arr[] = {-7,-5,-4,3,6,8,9};
    int len = 7;
    squareAndSort(arr,len);

    
  
}