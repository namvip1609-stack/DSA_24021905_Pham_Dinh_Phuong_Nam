#include <iostream>
#include <stdexcept>
using namespace std;

struct Node{
  int data;
  Node *next;
};

class stacklinklist{
  private:
  Node *topnode;
  public:
  
  // khởi tạo
  stacklinklist(){
      topnode = NULL;
  }
  // them vao dinh
  void them(int x){
      Node *tmp = new (Node);
      tmp->data = x;
      tmp->next = topnode;
      topnode = tmp;
  }
  
  // lay phan tu o top
  int top(){
      return topnode->data;
  }
  // xoa top
  void xoa(){
      Node* temp = topnode;
      topnode = topnode->next;
  }
};

int main()
{
    
    stacklinklist s;
    s.them(10);
    s.xoa();
    cout<<s.top();
    return 0;
}
