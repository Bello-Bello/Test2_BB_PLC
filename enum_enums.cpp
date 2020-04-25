/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    enum Grades{
        set1, set2, set3
        };
        enum Grades x, y;   // variables

    enum Values{
        low, mid, high   
        };
        enum Values m, n;   // variables

        x = set1;
        y = set2;
 
        m = low;   
        n = mid;
        
        cout<<"\n value of x is "<< x << endl;
        cout<<"\n value of y is "<< y << endl;
 
        x = (Grades)3;
        x = y;
        
        cout<<"\n changed value of x to "<< x << endl;
        cout<<"\n changed value of x now y to " << x <<endl;
 
        m = (Values)set2;
        cout<<"\n changed value of m to set2 as "<< m <<endl;
        
 
    
}