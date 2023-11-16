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
    /*
    Array mainArray(10);
    Array mainArray2(mainArray);
    cout<<"Capacity:"<<mainArray.getCapacity()<<endl;
    cout<<"Size:"<<mainArray.getSize()<<endl;
    
    cout<<"Capacity:"<<mainArray2.getCapacity()<<endl;
    cout<<"Size:"<<mainArray2.getSize()<<endl;
 
    mainArray.addItem(5);
    mainArray.addItem(12);
    mainArray.addItem(12);
    mainArray.addItem(12);
    mainArray.addItem(12);
    mainArray.addItem(23);
    mainArray.addItem(92);
    mainArray.addItem(3);
    mainArray.addItem(85);
    mainArray.addItem(76);
    mainArray.addItem(32);
    mainArray.addItem(3);
    mainArray.printItems();
    mainArray.addItem(42);
    mainArray.printItems();
    
    Array mainArray3=mainArray;
    mainArray3.printItems();
    mainArray3.addItem(15);
    mainArray3.addItem(18);
    
    mainArray.printItems();
    mainArray3.printItems();
    
    mainArray3.removeIndexItem(12);
    mainArray3.printItems();
    
    mainArray3.removeItem(1);
    mainArray3.printItems();
    
    mainArray3.findElement(12,2);
   */
    unsortedArray usArray(10);
    sortedArray sArray(10);
    
    usArray.addItem(10);
    usArray.addItem(8);
    usArray.addItem(12);
    usArray.addItem(7);
    usArray.addItem(150);
    usArray.addItem(5);
    usArray.printItems();
    
    sArray.addItem(10);
    sArray.addItem(8);
    sArray.addItem(12);
    sArray.addItem(7);
    sArray.addItem(150);
    sArray.addItem(5);
    sArray.printItems();
    
    
    return 0;
}
