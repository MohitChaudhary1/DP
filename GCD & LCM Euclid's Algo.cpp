#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    gcd(b,a%b);
}

int main() {
    // Write C++ code here
    cout<<gcd(12,6)<<endl;
    // LCM
    cout<<12*18 / gcd(12,18)<<endl;
    // in built function;
    cout<<__gcd(18,12)<<endl;
    return 0;
}