//
//  Array.h
//  classConcept4
//
//  Created by Kaan Şengün on 13.11.2023.
//

#include <iostream>
using namespace std;

class Array{
private:
    int *data,size,capacity;
    int findIndex(int number, int b=0);
public:
    Array(int user_capacity=5);
    ~Array();
    Array(const Array &copyArray);
    int getSize() const{
        return size;
    }
    int getCapacity() const{
        return capacity;
    }
    void AddItem(int number);
    void printItems();
    void removeIndexItem(int index);
    void removeItem(int number);
    void findElement(int number, int b=0);
};
Array::Array(int user_capacity){
    capacity=user_capacity;
    size=0;
    data=new int[capacity];
    cout<<"Array is created with capacity "<<capacity<<endl;
    
}
Array::~Array(){
    delete[] data;
    cout<<"Array destroyed."<<endl;
}
Array::Array(const Array &copyArray){
    capacity=copyArray.capacity;
    size=copyArray.size;
    data=new int[capacity];
    for(int i=0;i<copyArray.size;i++){
        data[i]=copyArray.data[i];
    }
    cout<<"Array copied to target."<<endl;
}
void Array::AddItem(int number){
    if(size==capacity){
        int *temp_data=new int[capacity*2];
        for(int i=0;i<size;i++){//önceki diziden geçici dizeye elemanlar aktarıldı
            temp_data[i]=data[i];
        }
        delete[] data;
        data=temp_data;
        capacity*=2;
    }
    data[size]=number;
    size++;
}
void Array::printItems(){
    if(size!=0){
        for(int i=0;i<size;i++)
            cout<<data[i]<<"-";
    }
    cout<<"\n"<<"capacity:"<<capacity<<" size:"<<size<<endl;
}
void Array::removeIndexItem(int index){
    if(index<0||index>=size){
        cout<<"ERROR! No item at the index"<<index<<endl;
        return;
    }
    int removeItem=data[index];
    for(int i=index;i<size;i++)
        data[i]=data[i+1];
    size-=1;
    cout<<"Item "<<removeItem<< " is deleted"<<endl;
    
}
void Array::removeItem(int number){
    int counter=0;
    for(int i=0;i<=size;i++){
        if(data[i]==number){
            for(int j=i;j<size;j++){
                data[j]=data[j+1];
            }
            counter+=1;
            i-=1;
        }
    }
    cout<<counter<<" items ("<<number<<") "<<"are deleted from the array"<<endl;
    size-=counter;
}
int Array::findIndex(int number,int index){
    for(int i=index;i<size;i++){
        if(data[i]==number){
            return i;
        }
    }
    return -1;
}
void Array::findElement(int number,int index){
    int result=findIndex(number,index);
    if(result!=-1){
        cout<<number<<" found at index "<<result<<endl;
    }
    else{
        cout<<number<<" not found in the array"<<endl;
    }
}

