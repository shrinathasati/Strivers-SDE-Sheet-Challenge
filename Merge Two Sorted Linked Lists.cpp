Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)

{

    if(first == NULL){

        return second;

    }

    if(second == NULL){

        return first;

    }

    

    Node<int>*  ans = new Node<int>(-1);

    Node<int>*  temp = ans;

    

    while(first!=NULL && second!=NULL){

        if(first->data < second->data){

            temp->next = first;

            temp = first;

            first = first->next;

        }

        else{

            temp->next = second;

            temp = second;

            second = second->next;

        }

    }

    

    while(first != NULL){

        temp->next = first;

        temp = first;

        first = first->next;

    }

    while(second != NULL){

        temp->next = second;

        temp = second;

        second = second->next;

    }

    return ans->next;

}

