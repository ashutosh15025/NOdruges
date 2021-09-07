#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
      int n,s,l;
      cin>>n>>s>>l;
      int arr[n];
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      int max=0;
      for(int j=0;j<n-1;j++){
      if(max<arr[j])
     max=arr[j];
      }
        if(max<arr[n-1])
          cout<<"Yes"<<endl;
          else{
              if(s<0)
                cout<<"No"<<endl;
                else{
                    if(arr[n-1]+(l-1)*s>max)
                    cout<<"Yes"<<endl;
                    else
                    cout<<"No"<<endl;
                }
          }
    }
}
