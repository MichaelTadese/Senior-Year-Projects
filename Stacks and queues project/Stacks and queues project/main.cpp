// MICHAEL TADESE

#include<iostream>
#include<string>

using namespace std;
struct Node
{
    string s;
    struct Node* link;
};
  
struct Node* top;
int stackamt()
{
    int n=0;
    Node *temp= new Node;
    for(temp=top; temp!=NULL; temp=temp->link){
        n++;
   }
    return n;
}
void pop()
{
    Node *prev = top, *temp = top;
    while(temp->link != NULL)
   {
       prev=temp;
       temp=temp->link;
   }
       prev->link=NULL;
       delete(temp);
}

void push_FUN()
{
    if(stackamt()>3||stackamt()==3)
        pop();
    cout<<"Enter the line of code: "<<endl;
    string s;
    cin.ignore();
    getline(cin, s);
  
    struct Node* temp;
    temp = new Node();
    temp->s=s;
    temp->link = top;
    top = temp;
    
}

int isEmpty()
{
    return top == NULL;
}

void undo_FUN()
{
    if (!isEmpty()) {
        cout<<top->s<<endl;
        struct Node* temp;
        temp = top;
        top = top->link;
        temp->link = NULL;
        delete(temp);
    }
    else{
        cout<<"END OF UNDO(epmty stack)"<<endl;
        
    }
}

int main(){
    while(1){
        cout<<"Select an option:"<<endl;
        cout<<"1. Enter a line of code"<<endl;
        cout<<"2. Undo"<<endl;
        cout<<"3. Quit"<<endl;
        int option;
        cin>>option;
        
        if(option==1) {
            push_FUN();
            
        }
        else if(option==2){
            undo_FUN();
            
        }
        else if(option==3){
            cout<<"\nEND OF THE PROGRAM!"<<endl;
            break;
            
        }
        
    }
    return 0;
    
}

