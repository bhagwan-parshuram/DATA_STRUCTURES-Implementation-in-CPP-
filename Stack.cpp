
#include<iostream>
#include <bits/stdc++.h>

#define max_size 100

using namespace std;

class Stack{
    
    int top=-1;

    public:
    int A[max_size];

    bool is_empty(){
        if(top==-1)
         return true;
        else
         return false;
    }

    bool is_full(){

        if(top==max_size-1)
          return true;
        else
          return false;
        
    }



    void pop(){
     if(top==-1)
        cout<<"Empty Stack"<<"\n";
     else
         top--;
    }


    void push(int x){
        if(top==max_size-1)
           cout<<"Stack Overflow"<<"\n";
        else
           A[++top]=x;
    }
    


    int peek(){
        return A[top];
    }
};

main(){
    Stack S;
    cout<<S.is_empty()<<"\n";
    S.pop();
    S.push(4);
    S.push(5);
    cout<<S.is_full()<<"\n";
    cout<<S.peek()<<"\n";
    
    

}
