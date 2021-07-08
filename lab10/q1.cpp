#include <iostream>

using namespace std;


struct node
{   
    int data;
    node *next;
};


node* newNode(int ele){
    node *n;
    n = new node;
    n->data = ele;
    n->next = NULL;
    return n;
}



node* addNodeToLL(node *head,int ele){
    //returns new head;
    node *n;
    n = newNode(ele);
    n->next = head;
    return n;
}


void displayLL(node* head){
    if(head==NULL){
        return;
    }
    else {
        cout<<head->data;
        cout<<" ";
        return displayLL(head->next);
    }
}


int main(){
    node *head;
    int n;
    cin>>n;
    head = newNode(n);
    while(n!=-1){
        cin>>n;
        head = addNodeToLL(head,n);
    }

    cout<<"output"<<endl;
    displayLL(head);
    return 0;
}

