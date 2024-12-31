#include <iostream>

using namespace std;
int u(int n){
    int a=3;
    int b=3*a+4;
    for(int i=1;i<=n;i++){
        a=b;
        b=3*a+4;
        }
    return a;
}
int main()
{
    cout << u(1);
    return 0;
}
