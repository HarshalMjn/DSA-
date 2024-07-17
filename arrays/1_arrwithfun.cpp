#include<bits/stdc++.h>

using namespace std;

void printArray(int arr[], int size) {
     for(int i = 0; i<size; i++) {
      cout<<arr[i];
    }

}


int main() {

    //declare arrays
    int number[15];
    //accing array
    



    //initialzing array
    int second[3] = {5,7,11};
    



    int third[15] = {2,7};
    //print array
     int n = 15;
    printArray(third,n);
    //problem but pht value hey array mndy means array sice is 2 so that why iam send the size separed in printArray function
    int thirdhSize = sizeof(third)/sizeof(int);
    cout<<"size is :"<<thirdhSize;


    //init all location - with zero
    int fourth[10] = {0};
    n = 10;

    int fifth[10] = {1};
    n = 10;
    printArray(fifth,10);
    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<"size is :"<<fifthSize;





    
    cout<<"Everything is fine";

    return 0;
}