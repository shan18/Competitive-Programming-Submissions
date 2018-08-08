/*
 * Link to problem: https://www.geeksforgeeks.org/reverse-a-stack-using-recursion/
 *  Solution Language: C++14
*/


#include <bits/stdc++.h>
#define SIZE 8

using namespace std;


int a[SIZE], b[SIZE], top_a = -1, top_b = -1;

bool a_isEmpty() {
    if(top_a == -1)
        return true;
    return false;
}

void push_a(int n) {
    if(top_a >= SIZE)
        cout << "Stack Overflow!" << endl;
    else
        a[++top_a] = n;
}

int pop_a() {
    if(a_isEmpty())
        cout << "Stack Underflow!" << endl;
    else
        return a[top_a--];
}

bool b_isEmpty() {
    if(top_b == -1)
        return true;
    return false;
}

void push_b(int n) {
    if(top_b >= SIZE)
        cout << "Stack Overflow!" << endl;
    else
        b[++top_b] = n;
}

void reverse_stack() {
    if(a_isEmpty())
        return;
    else {
        push_b(pop_a());
        reverse_stack();
    }
}

int main()
{
	for(int i = 0; i < SIZE; i++)
	    push_a(i);
	
	reverse_stack();
	
	cout << "A: ";
	for(int i = 0; i < SIZE; i++)
	    cout << a[i] << " ";
	
	cout << endl << "B: ";
	for(int i = 0; i < SIZE; i++)
	    cout << b[i] << " ";
}
