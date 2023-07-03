#include<bits/stdc++.h>
using namespace std;
void solve(string &s,string &ans,int i)
{   
    if(i == s.length() )
{       
 return;  
  }    

if(s[i]==s[i+1])

{        

solve(s,ans,i+1);   

 }    

else{     

   ans.push_back(s[i]);       

 solve(s,ans,i+1);  

  }

 }
string removeDuplicate(string &s)
{
    string ans="";  
  solve(s,ans,0); 
   return ans;  
}
int main(){
    string s="abaacee";
    cout<<removeDuplicate(s);
}


