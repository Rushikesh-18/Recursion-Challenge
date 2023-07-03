
#include<bits/stdc++.h>
using namespace std;

long long Pow(int X, int N)
{
    if(N==0){
        return 1;
    } 
    if(N==1){
        return X;
    }
    return X*Pow(X,N-1);
}
int main()
{
cout<<Pow(5,5);
}