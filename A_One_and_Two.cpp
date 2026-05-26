#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int t;
    cin>>t;
    while(t--){
       
       int n;
       cin>>n;
       
       vector<int>a(n);
       for (int i =0; i<n; i++){
        cin>>a[i];
       }
        int answer =-1;

       for (int k= 0; k<n-1; k++){
        int twos_till_k=0;
        int twos_after_k=0;
       
       for(int i=0; i<=k; i++){
        if(a[i] == 2)
          twos_till_k++;
       }
       
       for(int i= k+1; i<n; i++) {
        if(a[i] == 2)
           twos_after_k++;
       }
       if(twos_till_k==twos_after_k){
        answer=k+1;
        break;

       }
    }
    cout<<answer<<'\n';
    }

    
return 0;
}


