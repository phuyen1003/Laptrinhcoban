#include <iostream>
using namespace std;
int main() {
    int a, b,c;
    int max;
    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
    cout << "Nhap so thu ba: ";
    cin >> c;
    max = a;
    if (max<b){
        max = b;
    }
    if(max<c)
{
    max = c;
}
   cout << "max: " << max << endl;
return 0 ;
}