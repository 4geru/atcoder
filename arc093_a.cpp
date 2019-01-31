// comment
// #simulation

#include <iostream>
#include <vector>

using namespace std;

int sum_all(vector<int> v){
  int n = v.size();
  int calc = 0;
  int before = 5000;
  for(int j = 0 ; j < n ; j ++) {
    int now = 5000+v[j];
    // cout<<before<<" "<<now<<endl;
    int diff = before - now;
    calc += diff > 0 ? diff : -diff;
    before = now;
  }
  int now = 5000;
  // cout<<before<<" "<<now<<endl;
  int diff = before - now;
  calc += diff > 0 ? diff : -diff;
  before = now;

  return calc;
}

int abs(int n) {
  return n > 0 ? n : -n;
}

int main(void) {
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i = 0 ; i < n ; i ++)cin>>v[i];

  int sum = sum_all(v);
  for (int i = 0; i < v.size(); ++i) {
    int before = i == 0 ? 0 : v[i-1];
    int after = i != v.size() - 1 ? v[i+1] : 0;
    int now = v[i];
    int diff = abs(now - before) + abs(now - after) - abs(before - after);
    cout<<sum - diff<<endl;
  }
}
