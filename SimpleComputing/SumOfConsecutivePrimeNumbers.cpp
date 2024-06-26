#include <iostream>

using namespace std;

  const int maxp=2000, n=20000;   //Taking array size
   int prime[maxp], total=0;

bool isprime(int k){              //Checking k is a prime number or not
    for(int i=0; i<total; i++){
        if(k%prime[i]==0){
            return false;
        }
    }
    return true;
}
int main(void){
    for(int i=2; i<n; i++){
        if(isprime(i)){
            prime[total++]=i;
            if(total>=maxp){
                break;
            }
        }
    }

int m;
cin>>m;
while(m){
    int ans=0;
    for(int i=0; m>=prime[i]; i++){
        int cnt=0;
        for(int j=i; j< total&& cnt<m; j++){
            cnt+=prime[j];
            if(cnt==m){
                ++ans;
            }
        }
    }
    cout<<ans<<endl;  
    cin>>m;
}
return 0;
}
