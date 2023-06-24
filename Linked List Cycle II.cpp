/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/
#include<bits/stdc++.h>
Node *firstNode(Node *head)
{
    //    Write your code here.
    if(head==NULL){
        return NULL;
    }
    Node* temp=head;
    unordered_set<int> s;

    while(temp->next!=NULL){
        if(s.count(temp->data)==0){
            s.insert(temp->data);
            temp=temp->next;
        }
        else{
            return temp;
        }
    }
    return NULL;
}
