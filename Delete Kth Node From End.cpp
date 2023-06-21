/*
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
*/

Node* removeKthNode(Node* head, int k)
{
    // Write your code here.
    int n=0;
    Node* temp=head;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    if(n-k==0){
        head=head->next;
        return head;
    }
    int i=0;
    Node* temp1=head;
    Node* temp2=head->next;

    while(i<n-k-1){
        temp1=temp1->next;
        temp2=temp2->next;
        i++;
    }
    temp1->next=temp2->next;
    return head;

}
