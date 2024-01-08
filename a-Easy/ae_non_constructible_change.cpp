#include<iostream>
#include<map>
using namespace std;

/*
{7,5,1,1,2,3,22}
return the minimum amount of change that we cant not create 
*/

int main(){
    vector<int> coins = {7,5,1,1,2,3,22};
    sort(coins.begin(),coins.end());
    int change = 0;

    for(auto coin : coins){
        if(change + 1 >= coin){
            change += coin;
        }
        else{
            cout<<change+1<<endl;
            break;
        }
    }

}