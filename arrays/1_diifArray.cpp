#include<bits/stdc++.h>

using namespace std;

void printArray(int arr[],int size) {
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<endl;
    }
}

int main() {

    //char array
    char ch[5] = {'a','b','c','d','e'};
    cout<< ch[3]<<endl;
     for(int i = 0; i<5; i++){
        cout<<ch[i]<<endl;
    }

     double firstDuble[5];
     float   firstFloat[5];
     bool   firstBool[5];

     int a = 10;
     delete a;
     cout<<a;
     int* p = new int();
     *p = 10;
     cout<<p<<endl;
     delete(p);
     p = new int[4];
     cout<<p<<endl;
     delete[] p;   
     p = NULL;
     cout<<p; 

     int double num[] = {11,12,13,14,15,16};
     double add = 0;
     double count = 0;
     double avg;
     cout<< 'The num is =';
     for( const  n :  num){
        cout<<n<<" "<<endl;
        add += n;
        ++count;
     }
     cout<<"Add of num="<<add<<endl;
    //  avg = add/count;
    //  cout<<"Avg of num="<<avg<<endl;
     

    return 0;
}