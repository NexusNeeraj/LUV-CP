#include <bits/stdc++.h>
using namespace std;

vector<string> valid;

void generate(string &s, int open, int close){
      
      // Base Case
      if(open == 0 && close == 0){
            valid.push_back(s);
            return;
      }

      // opening bracket
      if(open > 0){
            s.push_back('(');
            generate(s, open - 1, close);
            s.pop_back();
      }

      // closing bracket
      if(close > 0){
            if(open < close){
                  s.push_back(')');
                  generate(s, open, close - 1);
                  s.pop_back();
            }
      }
}





int main(){

      int n;
      cin >> n;
      string s;
      int open = n

      generate(s, n, n);
      for(auto ele:valid){
            cout << ele << endl;
      }

}