#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n, x, t;
    cin>>n>>x>>t;
    int ret = 0;
    for( ; n > 0 ; n -= x) {
        ret += t;
    }
    cout<<ret<<endl;
}