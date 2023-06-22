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
bool detectCycle(Node *head)
{
    unordered_set<Node*> n;

    while(head){
        if(n.count(head)!=0){
            return true;
        }
        n.insert(head);
        head=head->next;
    }
    return false;
}
