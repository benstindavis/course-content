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
    //returns new tail;
    node *n;
    n = newNode(ele);
    tail->next = n;
    return n;
}

void deleteNodeAtK(node *head,int k){
    k--;
    while(k--){
        head = head->next;
    }
    head->next = head->next->next;

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
    int k;
    cout<<"enter k:";cin>>k;
    deleteNodeAtK(head,k);
    displayLL(head);
    return 0;
}