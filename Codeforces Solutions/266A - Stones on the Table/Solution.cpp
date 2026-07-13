#include<iostream>
    using namespace std;

int main(){

    int n;
    cin>>n;

    int count = 0;

    string s;
    cin>>s;

    for(int i = 0; i < n; i+=1){
        if(s[i] == s[i-1]) count +=1;
    }

    cout<<count;
    return 0;
}