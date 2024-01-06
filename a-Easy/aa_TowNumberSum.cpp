#include <iostream>
#include <map>
using namespace std;
void selection(int arr[], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        int min = i;
        for (int j = i + 1; j < arrLen; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int binarySearch(int arr[], int target, int arrLen)
{
    int s = 0;
    int e = arrLen - 1;

    while (s <= e)
    {
        int mid = (e + s) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return e;
}

void twoNumberSum(int arr[], int target, int arrLen)
{
    selection(arr, arrLen);

    for(int i = 0 ;i  < arrLen ;i++)
        cout<<arr[i]<<" ";
        cout<<endl;

    int l = 0;
    int r = arrLen - 1;
    // int r = binarySearch(arr,target,arrLen);

    while (l < r)
    {
        if (arr[r] + arr[l] > target)
        {
            r--;
        }
        else if (arr[r] + arr[l] < target)
        {
            l++;
        }
        else if (arr[r] + arr[l] == target)
        {
            cout << "[" << arr[l] << "," << arr[r] << "]" << endl;
            r--;
            l++;
            // ans[noAns] = l;
            // ans[noAns+1] = r;
        }
    }
}

void twoNumberSum2(int arr[],int target,int arrLen){
    map<int,int> numMap;
    for(int i = 0 ; i < arrLen ; i++){
        // x + y = target;
        int y = target - arr[i];
        if(numMap.find(y) == numMap.end()){
            numMap.insert({arr[i],true});
        }
        else{
            cout<<"["<<y<<","<<arr[i]<<"]"<<endl;
        }
    }
}

int main()
{

    int arr[] = {3, 5, -4, 8, 11, 1, -1, 6};
    int arrLen = sizeof(arr) / sizeof(int);
    selection(arr, arrLen);
    // for(int a:arr)cout<<a<<" ";cout<<endl;

    twoNumberSum(arr, 10, arrLen);
    cout<<"------"<<endl;
    twoNumberSum2(arr, 10, arrLen);
}