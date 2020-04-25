
#include <iostream>
#include <ctime>
using namespace std;

void staticArray();
void heapArray(int n);
void stackArray(int n);

int main(){
    int start,stop;
    start = clock();
    
    for(int i=0;i<20000;i++){
        staticArray();
    }
    stop = clock();
    cout<<"Time taken by static method: "<<(stop - start)<<" ms"<<endl;
  

    start = clock();
   
    for(int i=0;i<20000;i++){
        stackArray(200000);
    }
    stop = clock();
    cout<<"Time taken by onStack method: "<<(stop - start)<<" ms"<<endl;

    start = clock();
    for(int i=0;i<20000;i++){
        heapArray(200000);
    }
    stop = clock();
    cout<<"Time taken by onHeap method: "<<(stop - start)<<" ms"<<endl;
    }

    void staticArray(){
    int array[200000];
    }

    void heapArray(int n){
    int *array = new int[n];
    }
    
    void stackArray(int n){
    int array[n];
    }

