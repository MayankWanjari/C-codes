#include <iostream>
using namespace std;


int main (){
    
        int n,m;
        cin >> n >> m;
        int income=0;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            if(a<0) income+=a;
        }
        cout << -income << endl;

    return 0;
}