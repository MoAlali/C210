#include <iostream>
#include <iomanip>
using namespace std;
void modfiyArray(int[], int);
void modifyelement(int);
int main(){
    const int arraySize = 5;
    int a[arraySize] = {0,1,2,3,4};
    cout << "Effects of passing entire array by reference" << "\n\nThe values of the orginal array are :\n";
    for (int i = 0; i < arraySize; i++)
    {
       cout << setw(3) << a[i];
    }
    cout << endl;
    modfiyArray(a,arraySize);
    cout << "The Values of modifyed array are: \n";
        for (int i = 0; i < arraySize; i++)
    {
       cout << setw(3) << a[i];
    }
    cout << "\n\n\n" << "Effects of passing array element by value" << "\n\nThe Value of a[3] is" <<a[3]<<'\n';
    modifyelement(a[3]);
    cout << "The Value of a[3] is" << a[3] << endl;
    return 0;
}
void modfiyArray (int b[] ,int sizeOfArray){
    for (int k = 0; k < sizeOfArray; k++){
    b[k]*=2;
    }
}
void modifyelement (int e){
    cout << "Value of inModifyElement is " << (e *=2) <<endl;
}