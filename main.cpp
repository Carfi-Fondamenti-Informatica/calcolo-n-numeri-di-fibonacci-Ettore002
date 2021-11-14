#include <iostream>
using namespace std;

int main() {
   int n;
   cin>>n;
   
   if(n>=2){
      int x=0,y=1,z;
      for(int i=0;i<n;i++){
         z=x+y;
         x=y;
         y=z;
         cout<<x<<endl;
      }
   }else{
         cout<<"errore";
      }
   return 0;
}
