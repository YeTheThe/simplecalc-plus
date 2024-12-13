#include <bits/stdc++.h>
using namespace std;
const int maxl=1000;//Man input lenth for console
int main(){
    char console[maxl];
    memset(console,0,sizeof(console));
    cout<<"Welcome to Simplecalc!"<<endl;
    while(console[0] != 'c' && console[1] != 'a' && console[2] != 'l' && console[3] != 'c'){
        cout<<">";
        scanf("%s",console);
    }
    char op;
    int a,b;
    cin>>a>>op>>b;
    //TODO calculate the answer
    return 0;
}