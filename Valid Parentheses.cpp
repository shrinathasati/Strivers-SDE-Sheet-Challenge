#include<bits/stdc++.h>
using namespace std;


bool isValidParenthesis(string s)
{
    // Write your code here.
    int len=s.length();
    stack<char> a;
    for(int i=0;i<len;i++){
        char ch=s[i];
        if(ch=='(' || ch=='{' || ch=='['){
            a.push(ch);

        }
        else{
          if (!a.empty()) {

            char match = a.top();
            if ((ch == ')' && match == '(') || (ch == ']' && match == '[') ||
                (ch == '}' && match == '{')) {
              a.pop();
            } else {
              return false;
            }
          } else {
            return false;
          }
        }
    }
    if (a.empty()) {
      return true;
    }
    return false;
}
