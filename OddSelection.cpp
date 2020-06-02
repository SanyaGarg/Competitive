#include<bits/stdc++.h>
#define ll  long long
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

 int main(){

    fastio();
    ll int T;
    cin >>T;

    while(T--){

       int n,x;
       cin >> n >> x;

       int arr[n];

       int even=0,odd=0;

       for(int i=0;i<n;i++){                
           cin >> arr[i];
           if(arr[i]%2==0)even++;
           else odd++;
       }

     int cnt=0;

       if(x==n){
            if(x%2!=0){
                 if(odd%2!=0)cout << "Yes";
                 else cout << "No";
            }else{
                 if(even>0 && odd%2!=0)cout << "Yes";
                 else cout << "No";
            }
       }else if(x<n){
            if(x%2!=0){
                 if(odd>0)cout << "Yes";
                 else cout << "No";
                 
               }else{
                 if(even>0 && odd>0)cout << "Yes";
                 else cout << "No";
               }
       }

       cout << endl;
    }
}