#include<bits/stdc++.h>

using namespace std;

//int main() {
    // int marks;
    // cout<<"Enter your marks:";
    // cin>>marks;
    // if( 25 > marks){
    //     cout<<"F"; 
    // } else if( 44 >= marks ){
    //     cout<<"E";
    // } else if( 49 >= marks) {
    //     cout<<"D";
    // } else if(59 >= marks) {
    //     cout<<"C";
    // } else if(79 >= marks) {
    //     cout<<"B";
    // } else if( 100 >= marks) {
    //     cout<<"A";
    // } else {
    //    cout<<"Invalid marks"
    //}


    /*
      1. If age >= 18,
      print -> not eligble for job
      2. IF age <= 18,
      print -> eligble for job
      3. IF age >= 55 and age <= 57,
       print -> eligble for job, but retirement soon,
      4. IF age > 57
       print -> retirement age
    */


      
    //   int age;
    //   cout<<"Enter your Age=";
    //   cin>>age;

    //   if(age < 18) {
    //      cout<<"not eligble for job";
    //   }
    //   //>=18
    //   else if(age <= 57) {
    //      cout<<"eligble for job";
    //      if(age >= 55){
    //       cout<<",but retirement soon";
    //      }
    //   }
    // //   else if( age <= 57) {
    // //     cout<<"eligble for job, but retirement soon,";
    // //   } 
    //   else {
    //      cout<<"retirement age";
    //   }

    /*
    Take the day no and print the correponding day
    for 1 print Monday
    for 2 print Tuesday and so on for 7 print Sunday
    */

//    int day;
//    cin>>day;

//    switch (day)
//    {
//     case 1:
//         cout<<"Mon";
//         break;
//     case 2:
//         cout<<"Tuse";
//         break;
//     case 3:
//         cout<<"Wens";
//         break;
//     case 4:
//         cout<<"Thuse";
//         break;
//     case 5:
//         cout<<"Frid";
//         break;
//     case 6:
//         cout<<"satur";
//         break;
//     case 7:
//         cout<<"Sunday";
//         break;
//     default:
//        cout<<"Invalid";
  
//    } 
   
   //1D array
//    int arr[5];
//    cin>> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    
//     cout<<arr[5];


  //2D array
//   int arr [3][5];

//   arr[1][3] = 78;
//   cout<<arr[1][3];

//String

//   string s = "harshal";
//   int len = s.size();
//   cout<<s[len-1];

 

//  //For loop
//  int i;
//  for(i = 1; i<=10; i++) {
//     cout<<"Harshal"<<endl;
//  }
//  cout<<i;

//  int i = 1;
//  while(i<=5){
//    cout<<"harsha"<<i<<endl;;
//    i++;
//  }
//  int i = 2;
//  do {
//   cout<<"Harshal "<<i<<endl;
//  } while(i<=1);

//functions
//fun are set code which perform something for you
//fun are used to modularise code
//fun are used to increse readbility
//fun are used to use same code multiple times

 //types
 //void --> which does not return anything
 //return
 //parameterised
 //non parameterised


  


 


  // return 0;
//}

//functions
//fun are set code which perform something for you
//fun are used to modularise code
//fun are used to increse readbility
//fun are used to use same code multiple times

 //types
 //void --> which does not return anything
 //return
 //parameterised
 //non parameterised



//..> void and param.
// void printName(string name) {
//    cout<<"Hey "<<name;
// }
// int main() {
//    string name;
//    cin>>name;
//     printName(name);
//    return 0;
// }

//-->reutrn fun
//take two num and print sum
// int sum(int num1, int num2) {
//    int num3 = num1+num2;//5 + 6 = 11  
//    return num3;
// }
// int main() {
//    int num1,num2;
//    cin>>num1>>num2;
//    int res = sum(num1,num2);
//    cout<<res;
//    return 0;
//}

//Inbuit math function 
// int maxx(int num1,int num2) {
//    if(num1 >= num2) return num1;
//    else return num2;
//    //note :jr return type fucntion kely tr tula return krvc lgeyl nhitr tey garbahge value deyil
// }
// int main() { 
//   int num1,num2;
//   cin>>num1>>num2;
//   int minimum = maxx(num1,num2);
//   cout<<minimum;
// }

//pass  by Refernce and value

//->pass by value
// void doSomething (int num) {
//    cout<< num<<endl;
//    num += 5;
//    cout<< num <<endl;
//    num += 5;
//    cout<< num<<endl;
// }
// int main() {
//     int num = 10;
//     //strung s = "raj"
//     doSomething(num);
//     cout<<num;

//     //note-> pass the copy to function not origanl so stil it remian same  this called as pass by value
// }

//pass by refernce
//void doSomething (int &num) {
//    cout<< num<<endl;
//    num += 5;
//    cout<< num <<endl;
//    num += 5;
//    cout<< num<<endl;
// }
//int main() {
    //int num = 10;
    //strung s = "raj"
   // doSomething(num);
    //cout<<num;

    //note-> & take the address of the varibale not copy them so it peform opertion on its address
//}

//array  using for loop / refe
void dosomething(int arr[],int n) {
   arr[0] += 100;
   cout<<"value inside function"<<arr[0]<<endl;//105
}
int main() {
   int n = 5;
   int arr[n];
   for(int i = 0;i<n;i++) {
      cout<<i<<endl;
      cin>>arr[i];
   }

   // for(int i = 0;i<=4;i++) {
   //    cout<<arr[i]<<" ";
   // }

   dosomething(arr,n);
      cout<<"value inside int main"<<arr[0]<<endl;//105
   return 0;

   //note:array always pass with ref.
}