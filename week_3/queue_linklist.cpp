#include <iostream>
#include <stdexcept>
using namespace std;
struct Node{
    int data;
    Node *next;
};

class queue_linklist{
  private:
  Node *head;
  Node *fistend;
  public:
  queue_linklist(){
      head = NULL;
      fistend = NULL;
  }
   // them vao cuoi
 void them (int x){
     Node *newnode = new (Node);
     newnode->data = x;
     if(fistend == NULL){
         head = newnode;
         fistend = newnode;
         return;
 }
     fistend->next = newnode;
     fistend = newnode;
}
// xoa dau 
void xoa(){
    if(head == NULL){
        cout<<"rong";
    }
    head = head->next;
}
// chon phan ptu
int peek (){
    if(head == NULL){
        cout<<"rong";
        return -1;
    }
    return head->data;
}
};
int main()
{
    queue_linklist q;
    q.them(5);
    q.them(10);
  
   q.xoa();

   q.xoa();
   cout<<q.peek();
    return 0;
}
