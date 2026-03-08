#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("b1mang1chieu.inp","r",stdin);
    freopen("b1mang1chieu.out","w",stdout);
    int n,i,c,l;
    c=0;
    l=0;
    cin >> n;
    vector <int> arr(n);
    for (i=0;i<n;i++){
      cin >> arr[i];
      if (arr[i]%2==0){
         c=c+1;
      }
      else{
        l=l+1;
      }
}
    cout << c
     << endl << l ;

    return 0;
}
