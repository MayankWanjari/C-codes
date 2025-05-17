#include <iostream>
using namespace std;


int main (){
    int t;
    cin >> t;
    
    while(t--){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<int> vec{n};
        int temp=1;
        for(int i=0;i<n;i++){
            cin >> vec[i];

            if(i>0){
                if(vec[i]+vec[i-1]==0){
                    temp=0;
                    break;
                }
            }
        }
        (temp==0) ? cout << "YES" : cout << "NO";
        cout << endl;
    }

    return 0;
}