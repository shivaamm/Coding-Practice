#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  int t;
  cin >> t;
  for(int k = 0; k<t; ++k) {
      string s;
      cin>>s;

    //   using bool to check the value is true or not if an palindrome string exist or not
      bool flag = 1;
      for(int i = 0;i < s.length(); ++i){

          if(s[s.length()-i-1]!='a'){   //important condition
              s = s.substr(0,i) + "a" + s.substr(i,s.length()-i);   // printing first half adding 'a' and adding last half
              cout << "YES"<<endl<<s;

              flag = 0;
              break;
          }
      } 
      if(flag){
          cout << "NO";
      }
      cout << endl;
  }

}




// int main(){
//     int t; cin>>t;
//     for(int i = 0; i < t; i++){
//         string s; cin>>s;
//         int n = s.length();
//         bool code = false;
//         for(int i = 0; i < (n+1)/2; i++){
//             if(s[i] !='a'){
//                 code = true;
//                 cout<<"YES"<<endl;
//                 string ss = s.substr(0, n-i);
//                 cout<<ss<<'a';
//                 ss = s.substr(n-i);
//                 cout<<ss<<endl;
//                 break;
//             }
//             else if(s[n-i-1] != 'a'){
//                 code = true;
//                 cout<<"YES"<<endl;
//                 string ss = s.substr(0, i+1);
//                 cout<<ss<<'a';
//                 ss = s.substr(i+1);
//                 cout<<ss<<endl;
//                 break;
//             }
//         }
//         if(!code)cout<<"NO"<<endl;
//     }
//     return 0;
// }
