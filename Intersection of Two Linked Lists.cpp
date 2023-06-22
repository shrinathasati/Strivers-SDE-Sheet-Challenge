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
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    unordered_set<Node*> first;
    if(firstHead==NULL || secondHead==NULL){
        return 0;

    }
    while(firstHead){
        first.insert(firstHead);
        firstHead=firstHead->next;
    }
   
    while(secondHead){
        if(first.count(secondHead)!=0){
            
            return secondHead;
        }
        secondHead=secondHead->next;
    }
    return NULL;

}
