#include<iostream>
#include<map>
using namespace std;


/*
Tournament Winner - there is a algorithm competition taking place, in which multiple teams
compete against each-other we are going to have bunch of different competitions in this
tournament. 

There will be two teams who compete in each compotation and there will be exactly on winner and looser
each team compte against all other teams exactly one time  

inputs = competitions array -> { {'html','c#'} {'c#','python'} {'python','html'}}
and results array -> {0,0,1}

return name of the winning  team;        

*/



void sol(vector< vector<string> >arr,vector<int> res){

    string currentBestTeam  = "";
    int score = 0;

    map<string,int> track;

    int idx = 0;
    for(auto a_match : arr){
        track[a_match[res[idx]]] += 1;
        if(track[a_match[res[idx]]] > score){
            currentBestTeam = a_match[res[idx]];
            score = track[currentBestTeam];
        }
    }

    cout << "The winner is: "<<currentBestTeam<<endl;



}

int main(){

    vector< vector<string> > arr = { {"html","c#"}, {"c#","python"}, {"python","html"} };
    vector<int> res = {0,0,1};
    sol(arr,res);
    

}