#include <iostream>
#include "list.h"

using namespace std;
int main() {
    list myList;
    

	myList.insert(0, 7.0);
	myList.insert(1, 5.0);	
	myList.insert(0, 6.0);	
	myList.insert(8, 4.0);	

	myList.printlist();	

	if(myList.find(5.0) > 0){
        cout << "5.0 found" << endl;
    }
    	
	else{
        cout << "5.0 not found" << endl;
    }
    
	if(myList.find(4.5) > 0) {
        cout << "4.5 found" << endl;
    }
    
	else{
        cout << "4.5 not found" << endl;
    }
    
	myList.remove(7.0);
	myList.printlist();
    myList.findKth(2);
   
}