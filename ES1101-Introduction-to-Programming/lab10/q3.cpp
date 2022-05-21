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



node* addNodeToLL(node *tail,int ele){
    //returns new head;
    node *n;
    n = newNode(ele);
    tail->next = n;
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


void displayLLrev(node* head){
    if(head!=NULL){
        displayLLrev(head->next);
        cout<<head->data;
        cout<<" ";
    }    
}


int main(){
    node *head,*tail;
    int n;
    cin>>n;
    head = newNode(n);
    tail = head;
    while(n!=-1){
        cin>>n;
        tail = addNodeToLL(tail,n);
    }

    cout<<"output"<<endl;
    displayLL(head);
    cout<<endl;
    displayLLrev(head);
    return 0;
}