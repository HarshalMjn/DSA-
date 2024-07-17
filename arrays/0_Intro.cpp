#include<bits/stdc++.h>

using namespace std;


int main() {

    //declare arrays
    int number[15];
    //accing array
    cout<<"Value at 0 index :"<<number[0]<<endl;

    // cout<<"Value at 20 index :"<<number[20]<<endl;--> first declare array size 21

    //initialzing array
    int second[3] = {5,7,11};
     cout<<second[2]<<endl; ///11



    int third[15] = {2,7};
    //print array
    int n = 15;
     for(int i=0; i<n;i++){
        cout<<third[i]<<endl; //2,7,0,0 ..etc (rest of location is zero print)
     }

    //init all location - with zero
    int fourth[10] = {0};
    n = 10;
    for(int i = 0; i<n; i++) {
        cout<<fourth[i]<<endl;
    }

    //init all location - with one
    int fifth[10] = {1};
    n = 10;
    for(int i = 0; i<n; i++) {
        cout<<fifth[i]<<" "; //1,0,0,(rest of zero)
        //h.w --answer
    }



    
    cout<<"Everything is fine";

    return 0;
}