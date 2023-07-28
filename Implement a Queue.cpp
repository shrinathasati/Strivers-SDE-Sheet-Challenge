#include <bits/stdc++.h> 
class Queue {
public:
    int r,f;
        int *arr;
    Queue() {
        // Implement the Constructor
        arr=new int[10000000];
        r=-1;
        f=-1;
        
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(r==f){
            return true;
        }
        return  false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        r++;
        arr[r]=data;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(r==f){
            return -1;
        }
        f++;
        return arr[f]; 
    }

    int front() {
        // Implement the front() function
        if(r==f){
            return -1;
        }
        return arr[f+1];
    }
};
