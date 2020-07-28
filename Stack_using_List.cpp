#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class stackNode{
    public:
      int data;
      stackNode* next;
  
};

stackNode* newNode(int x){
    stackNode* p= new stackNode;
    p->data=x;
    p->next=nullptr;
    return p;

}

bool Is_empty(stackNode* root){
    if(!root)
      return true;
    else
      return false;
}

//in push we push the data at the beginning of the linked list
void push(stackNode** root, int x){
    stackNode* p=newNode(x);
    p->next=*root;
    *root=p;
}

// in pop we remove the first elements
void pop(stackNode** root){

    if(Is_empty(*root))
      cout<<"Error"<<"\n";
    else{
      stackNode* p=*root;
     *root=(*root)->next;
     delete p;
    }
}

int peek(stackNode** root){
    return (*root)->data;
}


int main() 
{
    stackNode * Stack=nullptr;

    cout<<Is_empty(Stack)<<"\n";
    push(&Stack,10);
    push(&Stack,-1);
    push(&Stack,4);
    push(&Stack,10);
    cout<<peek(&Stack)<<"\n";
    pop(&Stack);
    cout<<peek(&Stack);

    
return 0;
}
