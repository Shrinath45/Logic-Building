#include <iostream>
using namespace std;

int main(){
    int n;
     int fact = 1;
    
    cout<<"Enter a Number to find Factorial"<< endl;
    cin>>n;

    if (n>0)
    {
        /* code */
        for (int i = 1; i <= n; i++)
        {
            /* code */
            fact = fact * i;
        }
        cout<<"The Factorial of "<< n<< "is"<< fact << endl;
        
    }else{
        cout<<"Enter a Positive Number";
    }
    
    return 0;
}