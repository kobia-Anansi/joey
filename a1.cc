#include <iostream>
using namespace std;
int main(){
    cout << "Enter a positive integer" <<endl;
    int x; cin >> x ;/*x is the input from the user */
    int foo [7] = {0,1,2,5,9,3,7}; int p = 7;
    /* with the exception of the single digit prime numbers 1,2,3,5 and 7; all other prime numbers end with a 1,3,7 or 9.
     therefore dividing multi-digit prime numbers by these numbers except 1, will always give a remainder.
     This fact, in conjuction with the expression (x%2!=0) can be used as a condition to filter out non-prime 
     numbers. the single digit prime and non-prime numbers have also been catered for as shown in the code below*/
    for (int i = 4; i < p; i++){
        if ((x==foo[2] or x==foo[3]) or (x%foo[i]!=0 and (x%2!=0 and x!=1))){
            cout << x << " is a prime number" <<endl;
            return 0;
        }else if ((x%2==0 or x%foo[i]==0) or (x==foo[0] or x==foo[1])){
            cout << x << " is not a prime number" << endl;
            return 0;
        }
    }
}