#include <iostream>
using namespace std;


int main (){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int a[n],count=0;
        for (int i=0;i<n;i++){
            cin >> a[i];
            if(i>0 && ((a[i]%2==0 && a[i-1]%2==0) || (a[i]%2!=0 && a[i-1]%2!=0))) count ++;
        }

        cout << count << endl;
    }
}