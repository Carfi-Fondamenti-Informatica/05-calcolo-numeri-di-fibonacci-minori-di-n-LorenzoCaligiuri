#include <iostream>
using namespace std;

int main() {
    int n=0;
    int fib=0;
    int fib_2=1;
    int somma=0;
    cin>>n;
        cout<<fib_2<<endl;
        while(somma<=n){
            somma=fib+fib_2;
            fib=fib_2;
            fib_2=somma;
            if(somma<=n){
                cout<<somma<<endl;
            }
        }
    return 0;
}
