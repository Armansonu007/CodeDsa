#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    //there are three approach to do this 
    //1st one binary based 
    for(int i = 3; i >= 0; i--) { 
        cout << ((n >> i) & 1);
    }
    /*2nd one binary based just little bit logic change
    for (int i = 4; i >= 0; i--) {
        if (((1 << i) & n) != 0) 
            cout << 1<<endl;
        else
            cout << 0<<endl;
    }
    */
    /*3rd one is mathematical approach
     
    */
}
