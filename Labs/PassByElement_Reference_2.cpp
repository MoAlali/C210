#include <iostream>
#include <iomanip>
using namespace std;
void trytoModifyArray(const int[]);
int main(){
    int a[] = {10,20,30};
    trytoModifyArray(a);
    cout << a[0] << ' ' << a[1] << ' ' <<  a[2] <<'\n'; 

}
void trytoModifyArray(const int b[]){
    b[1];
    b[2];
    b[3];
}