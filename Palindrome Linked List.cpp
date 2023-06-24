#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL || head->next==NULL){
        return 1;
    }
    stack<int> s;
    LinkedListNode<int> *temp=head;
    while(temp){
        s.push(temp->data);
        temp=temp->next;
        
    }
    
    LinkedListNode<int> *p=head;
    while(p){
        if(p->data==s.top()){
            s.pop();
            p=p->next;
        }
        else{
            return 0;
            
        }
    }
    if(s.empty()){
        return 1;
    }

}
