#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    //its a simple approach 
    //just right sift the bit that you want to check and take not operation 
    //with 1 if it is set it will give one otherwise zero
    for(int i = 3; i >= 0; i--) { 
        cout << ((n >> i) & 1);
    }
    /*
    you can also use take the 1 to that position where you 
    want to check whether it is set or not and then take not operation 
    if it is non zero then it is set bit otherwise it is zero 
    (1<<i)& num !=0 then set 
    else not set 
    */
}
