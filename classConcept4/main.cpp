//
//  main.cpp
//  classConcept4
//
//  Created by Kaan Şengün on 13.11.2023.
//

#include <iostream>
#include "Array.h"
using namespace std;


int main(int argc, const char * argv[]) {
   
    Array mainArray(10);
    Array mainArray2(mainArray);
    cout<<"Capacity:"<<mainArray.getCapacity()<<endl;
    cout<<"Size:"<<mainArray.getSize()<<endl;
    
    cout<<"Capacity:"<<mainArray2.getCapacity()<<endl;
    cout<<"Size:"<<mainArray2.getSize()<<endl;
 
    mainArray.AddItem(5);
    mainArray.AddItem(12);
    mainArray.AddItem(12);
    mainArray.AddItem(12);
    mainArray.AddItem(12);
    mainArray.AddItem(23);
    mainArray.AddItem(92);
    mainArray.AddItem(3);
    mainArray.AddItem(85);
    mainArray.AddItem(76);
    mainArray.AddItem(32);
    mainArray.AddItem(3);
    mainArray.printItems();
    mainArray.AddItem(42);
    mainArray.printItems();
    
    Array mainArray3=mainArray;
    mainArray3.printItems();
    mainArray3.AddItem(15);
    mainArray3.AddItem(18);
    
    mainArray.printItems();
    mainArray3.printItems();
    
    mainArray3.removeIndexItem(12);
    mainArray3.printItems();
    
    mainArray3.removeItem(1);
    mainArray3.printItems();
    
    mainArray3.findElement(12,2);
    
    
    
    
    
    return 0;
}
