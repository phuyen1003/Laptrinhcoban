#include <iostream>
using namespace std;
int main() {
  int n;
  long s = 0;
  cout<<"Nhập vào số n: ";
  cin>> n;
  for(int i = 1; i <= n; i++){
    s += i;
  }
  cout<<"Tổng biểu thức : "<<n<<" là: "<<s;
 
  
}