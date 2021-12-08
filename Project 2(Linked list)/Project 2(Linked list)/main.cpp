#include <iostream>
#include <string>
using namespace std;

struct Node{
int key;
string value;
Node* next;
};

struct LinkedList{
   Node* head;

   LinkedList(){
       head=NULL;
   }

   void insert(int k, string val){
      
       if(head==NULL){
           head=new Node;
           head->key=k;
           head->value=val;
           head->next=NULL;
       }
       else{
           Node* new_node=new Node;
           new_node->key=k;
           new_node->value=val;
           new_node->next=NULL;

        
           if(head->key<=k){
               new_node->next=head;
               head=new_node;
           }
           else{
               Node* current, *previous;
               current=head->next;
               previous=head;

               while(true){
                   if(current!=NULL){
                       
                       if(current->key<=k){
                           previous->next=new_node;
                           new_node->next=current;
                           break;
                       }
                  
                       else{
                           previous=current;
                           current=current->next;
                       }
                   }
               
                   else{
                       previous->next=new_node;
                       break;
                   }
               }
           }
       }
   }

   string remove(int k){
       if(head==NULL){
           return "key not found to remove";
       }
      
       else if(head->key==k){
           Node* node=head;
           head=head->next;
           string value=node->value;
           free(node);
           return value;
       }
       else{
           Node* current=head->next;
           Node* previous=head;

   while(current!=NULL){
  
   if(current->key==k){
   previous->next=current->next;
   string value=current->value;
   free(current);
   return value;
   }
   
   else if(current->key<k){
       return "key not found to remove";
   }
   else{
   previous=current;
   current=current->next;
   }
   }
       }
       return "key not found to remove";
   }

   void traverse(){
       cout<<"****Linked List Data****"<<endl;
       if(head==NULL){
           cout<<"No Value in the Linked List!!"<<endl<<endl;
       }
       else{
           Node* current=head;
           while(current!=NULL){
               cout<<"***The Key is: "<<current->key<<" and The Value is: "<<current->value<<endl<<endl;
               current=current->next;
           }
       }
       return ;
   }

   string search(int k){
       if(head==NULL){
           return "not found!!";
       }
       else if(head->key==k){
           return head->value;
       }
       else{
           Node* current=head->next;
           Node* previous=head;

   while(current!=NULL){
   if(current->key==k){
   return current->value;
   }
   else if(current->key<k){
       return "not found!!";
   }
   else{
   previous=current;
   current=current->next;
   }
   }
       }
       return "not found!!";
   }
};


int main(){
   LinkedList michael;
   while(true){
       cout<<"Please select an operation (enter 1, 2, 3 or 4; to quit enter 0):"<<endl;
       cout<<"1. Insert\n2. Delete\n3. Traverse\n4. Search"<<endl;
       int option=0;
       cin>>option;
       if(option==1){
           int key;
           string value;
           cout<<"Enter key of choice: ";
           cin>>key;
           cout<<"Enter the value for the Key: ";
           cin>>value;
           cout<<endl;
           michael.insert(key, value);
       }
       else if(option==2){
           int key;
           cout<<"Enter key to delete: ";
           cin>>key;
           cout<<michael.remove(key)<<endl;
       }
       else if(option==3){
           michael.traverse();
       }
       else if(option==4){
           int key;
           cout<<"Enter key to search: ";
           cin>>key;
           cout<<"The value for "<< key << " is: ";
           cout<<michael.search(key)<<endl<<endl;
       }
       else if(option==0){
           break;
       }
   }
   return 0;
}

