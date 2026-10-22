#include <iostream>
#include <stdexcept>
using namespace std;
class queue_array{
  private:
  int *arr;
  int n;
  int index;
  
  public:
  queue_array(int size =100){
      n = size;
      arr = new int[n];
      index = 0;
  }
   // them vao cuoi
    void them(int x){
      
        arr[index] = x;
          index ++;
    }
    //  delete 
    void xoadau (){
        for(int i = 1;i<index;i++){
            arr[i-1] = arr[i];
        }
        index --;
    }
    // chon
    int lay(){
        return arr[0];
    }
    
  
  
};
int main()
{
  queue_array q(5);
  q.them(10);
  cout<<q.lay();

    return 0;
}
