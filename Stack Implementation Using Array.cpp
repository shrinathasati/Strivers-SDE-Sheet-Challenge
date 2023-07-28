#include <bits/stdc++.h> 
// Stack class.
class Stack {
private:
    int *arr;
    int tail=-1;
    int size;
    
public:
    
    Stack(int capacity) {
        // Write your code here.
    arr=new int[capacity];
    size=capacity;
    
    }

    void push(int num) {
        // Write your code here.
        if(tail!=size-1){
            
        tail++;
        arr[tail]=num;
        }

    }

    int pop() {
        // Write your code here.
        if(tail!=-1){
            int x=arr[tail];
            tail--;
            return x;
        }
        return -1;
    }
    
    int top() {
        // Write your code here.
        if(tail!=-1){
            return arr[tail];
        }
        return -1;
    }
    
    int isEmpty() {
        // Write your code here.
        if(tail==-1){
            return 1;
        }
        return 0;
    }
    
    int isFull() {
        // Write your code here.
        if(tail==size-1){
            return 1;
        }
        return 0; 
    }
    
};
