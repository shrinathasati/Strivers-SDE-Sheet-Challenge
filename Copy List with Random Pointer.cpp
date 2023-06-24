#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    LinkedListNode<int> *ans;
    ans=NULL;
    while(head){
        LinkedListNode<int>* temp=new LinkedListNode<int>(head->data);
        if(ans==NULL){
            ans=temp;
        }
        temp->next=head->next;
        temp->random=head->random;
        head=head->next;
        temp=temp->next;
    }
    return ans;
}
