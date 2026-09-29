#include<iostream>
#include <algorithm>
using namespace std;
 
void solve(){
        int arr[7];
    for ( int i = 0; i<7; i++){
        cin>>arr[i];
    }
 sort(arr, arr + 7);
    int ans=0;
    for( int j=0; j<6; j++){
        ans +=arr[j];
    }
 cout << arr[6] - ans << '
';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
 
    return 0;
}