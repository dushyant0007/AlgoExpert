#include <iostream>
using namespace std;

/*
Subsequence - is a sequence that can be derived form another sequence by deleting some
              or no elements without changing the order of the recaning elements
*/

// is b[] is a subsequence of a[]
bool findClosestValue(int a[], int b[], int aLen, int bLen)
{
    int ans[bLen];

    int bp = 0; //b-pointer
    int ap = 0;
    while(ap < aLen && bp<bLen)
    {
        if (a[ap] == b[bp])   
            bp++;
        ap++;
    }

    return bp == bLen;
}

int main()
{

    int a[] = {5, 1, 22, 25, 6, -1, 8, 10};
    int aLen = sizeof(a) / sizeof(int);

    int b[] = {1, 6, -1, 11};
    int bLen = sizeof(b) / sizeof(int);

    cout << findClosestValue(a, b, aLen, bLen) << endl;
}