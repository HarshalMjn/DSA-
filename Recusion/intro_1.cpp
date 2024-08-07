#include <bits/stdc++.h>
using namespace std;

// void f(){
//     cout<<"1"<<endl;
//     f();
// }

// int main() {
//     f();

//     return 0;
 //out-> stack overflow
// }
int cnt = 0;
void f() {
    if(cnt == 3) return; 
    cout<<cnt<<endl;
    cnt++;
    f();

}
int main() {
    f();

    return 0;
    //stop when(3==3)
}