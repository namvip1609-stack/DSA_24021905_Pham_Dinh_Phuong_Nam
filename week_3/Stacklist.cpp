#include <iostream>
#include <stdexcept>
using namespace std;
class Stackarray {
  private:
  int *arr;
  int n;
  int topIn;
  
  public:
  Stackarray(int size =100){
      n = size;
      arr = new int[n];
      topIn = -1;
  }
  
  // thêm phần tử vào đỉnh
  void them(int x){
      arr[++topIn]= x;
  }
  // xóa
  void xoa(){
      topIn--;
  }
  // lấy giá trị
 int chon(){
     return arr[ topIn]; 
  }
  
};
  int main(){
      Stackarray s(5);
      for (int i= 1;i<6;i++){
          s.them(i);
      }
      cout<<s.chon();
      s.xoa();
      cout<<s.chon();
      return 0;
  }
  
