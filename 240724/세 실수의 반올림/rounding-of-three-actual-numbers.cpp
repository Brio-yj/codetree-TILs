#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a,b,c;

    cin>>a>>b>>c;
    a*=1000;
    b*=1000;
    c*=1000;
    a=round(a);
    b=round(b);
    c=round(c);
    a/=1000;
    b/=1000;
    c/=1000;
    cout<<fixed;
    cout.precision(3);
    cout<<a<<"\n"<<b<<"\n"<<c;
    
    return 0;
}