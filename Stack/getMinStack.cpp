#include<bits/stdc++.h>
using namespace std;
class MinStack {
    public:
    MinStack() {}
stack<int> st,minSt;

void push(int val) { 
    if(minSt.empty() || val <=minSt.top()){
        minSt.push(val);
    }
    st.push(val);
}

 void pop() {
    if(st.top()==minSt.top()){
        minSt.pop();
    }
    st.pop();
 }
 
int top() {
    return st.top();
 }

int getMin() {
    return minSt.top();
}
};

int main(){
    MinStack* specialStack = new MinStack();
    specialStack->push(2);
    specialStack->push(5);
    specialStack->push(7);
    specialStack->push(3);
    specialStack->push(6);
    cout<<specialStack->getMin();
}


/***
 * Function call stack: When a program executes a function, it creates a new stack frame on the call stack to store the function's local variables and return address. The call stack is a LIFO (Last-In-First-Out) data structure, which means that the most recently called function is the first one to return. Using a stack for the call stack is more efficient than using an array because it avoids the overhead of resizing an array and allows for constant-time push and pop operations.
*/