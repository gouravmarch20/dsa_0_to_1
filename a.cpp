#include <bits/stdc++.h>

using namespace std;

void toHex(){

};

int main()
{
  // sad
  vector<int> arr(5, -1);
  stack <int > st;
  st.push(4);
  st.push(44);
  while(st.empty() == false){
    cout << st.top();
    st.pop();
  }
  cout << "hello" << endl;
  return 0;
}
