#include<iostream>
using namespace std;

/*
Subsequence - is a sequence that can be derived form another sequence by deleting some 
              or no elements without changing the order of the recaning elements
*/

bool findClosestValue(int a[],int b[] , int aLen,int bLen){
  int ans[bLen];

  // for (int j = 0; j < bLen; j++)
  // {
  // for (int i = 0; i <aLen ; i++)
  // {
  //   if(a[i]==b[j]){
  //       ans[j] = i;
  //   }
  // }
  // }

  int bp = 0;
  for (int i = 0; i < aLen; i++)
  {
    if(a[i]==b[bp]){
      ans[bp] = i;
      bp++;
  }
  }
  // if (bp!=bLen)
  //   {
  //     cout<<"False"<<endl;
  //     return false;
  //   }
  

  for (int i = 0; i < bLen -1 ; i++)
  {
        
    if (ans[i]>ans[i+1])
    {
      // for(int a:ans)cout<<a<<" ";
       cout<<"False"<<endl;
      return false;

    }
  }
   cout<<"True"<<endl;
  return true;

}


int main(){

  int a[] = {5,1,22,25,6,-1,8,10};
  int aLen = sizeof(a)/sizeof(int);

  int b[] = {1,6,-1,11};
  int bLen = sizeof(b)/sizeof(int);

  cout<<findClosestValue(a,b,aLen,bLen)<<endl;
  

}