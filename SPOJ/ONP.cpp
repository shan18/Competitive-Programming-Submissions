// C++14

#include <bits/stdc++.h>
using namespace std;

char rpn[405];
char op_stack[400];
int stack_top = -1;
int rpn_top = -1;

void push_stack(char c) {
    op_stack[++stack_top] = c;
}

char pop_stack() {
    return op_stack[stack_top--];
}

void push_rpn(char c) {
    rpn[++rpn_top] = c;
}

char pop_rpn() {
    return rpn[rpn_top--];
}

int main() {
	int test;
	cin >> test;
	while(test--) {
	    string s;
	    cin >> s;
	    int count = 0;
	    for(int i = 0; i < s.length(); i++) {
	        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
	            push_stack(s[i]);
	        } else if(s[i] == '(')
	            count++;
	        else if(s[i] == ')') {
	            count--;
	            push_rpn(pop_stack());
	        }
	        else {
	            push_rpn(s[i]);
	        }
	    }
	    for(int i = 0; i <= rpn_top; i++)
	        cout << rpn[i];
	    cout << endl;
	    stack_top = rpn_top = -1;
	}
	return 0;
}
