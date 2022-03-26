#include <bits/stdc++.h>


using namespace std;

template <size_t N>
std::bitset<N> increment ( std::bitset<N> in ) {
    for ( size_t i = 0; i < N; ++i ) {
        if ( in[i] == 0 ) {  
            in[i] = 1;
            break;
            }
        in[i] = 0; 
        }
    return in;
    }

bool isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) {
        return true;
    }
    else {
        return false;
    }
}

string getString(string s, int n, bitset<100> mask){
    string s1;
    for(int i = 0; i < n; i++){
        if(mask[i]){
            s1.push_back(s[i]);
        }
    }
    return s1;
}

bool checkStr(string s, int n){

    bitset<100> mask;
    for(int i = 0; i < 1<<n;i++){
        string s1 = getString(s,n,mask);
        if(isPalindrome(s1) && s1.size()>1){
            return false;
        }
        mask = increment(mask);
    }
    return true;
}




void permute(string a, int l, int r,bool &isValid)
{
    // Base case
    if (l == r)
        {
            if(checkStr(a,a.size())){
                isValid = true;
            }
            else {
                isValid = false;
            }
        }
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {
 
            // Swapping done
            swap(a[l], a[i]);
 
            // Recursion called
            permute(a, l+1, r,isValid);
 
            //backtrack
            swap(a[l], a[i]);
        }
    }
}




void func(string s,int n){
    bool iv = true;
    permute(s,0,n-1,iv);

    if(iv){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;

    int n;
    string s;
    while(t--){
        cin>>n;
        cin>>s;
        func(s,n);
    }

    return 0;
}