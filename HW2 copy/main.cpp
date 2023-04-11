#include <iostream>
#include "list.h"

using namespace std;
int main() {
    list myList;
    

	myList.insert(0, 0);
	myList.insert(9, 99);	
	

	myList.printlist();	

	if(myList.find(5.0) > 0){
        cout << "5.0 found" << endl;
    }
    	
	else{
        cout << "5.0 not found" << endl;
    }
    
	if(myList.find(9) > 0) {
        cout << "9 found" << endl;
    }
    
	else{
        cout << "9 not found" << endl;
    }
    
	my

	myList.remove(7.0);
	myList.printlist();
    myList.findKth(2);
   
}