/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
     if(head==NULL || head->next==NULL|| k==0){
          return head;
     }
     int n=0;
     Node *temp=head;
     while(temp){
          n++;
          temp=temp->next;
     }
     if(k%n==0){
          return head;
     }
     int i=1;
     temp=head;
     int a=(n-k);
     if(k>n){
          int x=k%n;
          a=(n-x);
     }
     while(i<a){
          temp=temp->next;
          i++;
     }
     Node *ans=temp->next;
     temp->next=NULL;

     Node *p=ans;
     while(p->next!=NULL){
          p=p->next;
     }
     p->next=head;
     return ans;
}
