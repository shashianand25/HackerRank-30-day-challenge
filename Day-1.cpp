#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int j;
    double b;
    string k;
    cin>>j;
    cin>>b;
    cin.ignore();
    getline(cin, k);

    cout<<i+j<<endl;
    cout<<fixed<<setprecision(1)<<d+b<<endl;
    cout<<s+k;
  

    return 0;
}