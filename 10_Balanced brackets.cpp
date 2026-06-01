#include <string>
using namespace std;

string isBalanced(string s) {
    int top = -1;
    
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            top++;
            s[top] = c;
        } else {
            if (top == -1) return "NO";
            
            if ((c == ')' && s[top] == '(') || 
                (c == '}' && s[top] == '{') || 
                (c == ']' && s[top] == '[')) {
                top--;
            } else {
                return "NO";
            }
        }
    }
    
    return (top == -1) ? "YES" : "NO";
}