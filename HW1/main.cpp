#include <iostream>
using namespace std;

int fact(int n){ 

    if (!(n < 2)){
        return n * fact(n - 1); // reducing case
    }
    return 1; 
}




int main(){
    int n;
    cin >> n;
    cout << "Factorial of " << n << " is " << fact(n)<< endl;

}