#include<iostream>

using namespace std;
class Node{
    public:

        int data;
        Node * next;

};


void InsertNode(Node ** head, int data){
    Node * n1=new Node();

    n1-> data=data;
    n1->next=(*head);
    (*head)=n1;
}

void PrintList(Node* node){
    while(node != NULL){
        cout<<" "<<node->data;
         
         node=node->next;

    }
    cout<<"\n";
}
void lastinsert(Node **head, int value){
    Node* n1=new Node();

    Node* temp=(*head);

    n1->data=value;
    n1->next=NULL;

    if(temp == NULL){
        (*head)=n1;
        return;
    }
 
         while(temp->next !=NULL){
            temp=temp->next;
         }

         temp->next=n1;

         return;
    
}

int main(){

    Node* head=NULL;

    InsertNode(&head,132);
    PrintList(head);
    InsertNode(&head,133);
    InsertNode(&head,134);
    InsertNode(&head,135);
    InsertNode(&head,136);
    lastinsert(&head,900);
    InsertNode(&head,137);
    InsertNode(&head,138);
    PrintList(head);



    return 0;
}