#include <iostream>
#include "extremely_round.h"
using namespace std;



int main (){
    int t;
    cin >> t;
    
    while(t--){
        NewFunction();
    }

    return 0;
}
void NewFunction()
{
    int n;
    cin >> n;
    if (n <= 9)
    {
        cout << n;
    }
    else
    {
        int count = 0;

        for (int i = 10; i <= n; i += 10)
        {
            if (n % 10 == 0)
                count++;
        }
    }
}