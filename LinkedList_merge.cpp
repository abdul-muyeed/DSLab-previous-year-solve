#include<bits/stdc++.h>
using namespace std;
struct node{
    string data;
    node* next;
};



void insert(node* &head,string data){
    node* temp = new node();
    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
        return;
    }
    node* nodes = head;
    
    while(nodes){
        
        if(nodes->next == NULL){
            nodes->next = temp;
            return;
        }
        nodes = nodes->next;
    }
}
void display(node* &head){
    node* temp = head;
    //cout<<temp->data<<endl;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void merge(node* &head1,node* &head2){
    node* temp = head1;
     while(temp){
        
        if(temp->next == NULL){
            temp->next = head2;
            return;
        }
        temp = temp->next;
    }


}

void init(){
    freopen("input.txt","r",stdin);
}
int main(){
    init();
    node* head1 = NULL;
    node* head2 = NULL;
    //cout<<"Enter 1st Linkedlist: ";
    string s1;
    while(1){
        cin>>s1;
        if(s1=="end"){
            break;
        }
        insert(head1,s1);  
    }
    //cout<<"Enter 2nd Linkedlist: ";
    while(1){
        cin>>s1;
        if(s1=="end"){
            break;
        }
        insert(head2,s1);  
    }
    cout<<"1st Linkedlist: ";
    display(head1);
    cout<<"2nd Linkedlist: ";
    display(head2);
    merge(head1,head2);
    display(head1);


    

    
    
}