#include<bits/stdc++.h>

using namespace std;

//pair
void explainPair() {
    pair <int, int> p = {1,2};
    cout<<p.first<<" "<<p.second<<endl;  //1 2

    pair <int,string> myString = {1,"harshal"};
    cout<<myString.first<<" "<<myString.second<<endl; // 1 harshal

    pair <int ,pair<int,int>> s = {1,{1,2}};
    cout<<s.first<<" "<<s.second.second<<" "<<s.second.first<<endl; // 1 2 1

    pair <int, int> arr[] = {{1,2,},{2,5},{5,1}};
    cout<<arr[1].second;//5

}

//vector
void explainVector() {

    vector<int>v;
    



}


int main() {
    explainPair();
}