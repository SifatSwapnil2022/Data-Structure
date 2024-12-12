#include <iostream>
#include <stack>
using namespace std;
bool isBalancedExp(string ex) {
   stack<char> s;
   char x;
   for (int i=0; i<ex.length(); i++) {
      if (ex[i]=='('||ex[i]=='['||ex[i]=='{') {
         s.push(ex[i]);
         continue;
      }
      if (s.empty())
         return false;
      switch (ex[i]) {
      case ')':
         x = s.top();
         s.pop();
         if (x=='{' || x=='[')
            return false;
         break;
      case '}':
         x = s.top();
         s.pop();
         if (x=='(' || x=='[')
            return false;
         break;
      case ']':
         x = s.top();
         s.pop();
         if (x =='(' || x == '{')
            return false;
         break;
      }
   }
   return (s.empty());
}
int main() {
   string expresion ;
   printf("THE EXPRESION :");
   cin >> expresion;
   if (isBalancedExp(expresion))
      cout << "This is Balanced Expression";
   else
      cout << "This is Not Balanced Expression";
}
