#include<iostream>
#include<bitset>
using namespace std;
int main()
{    int d=15;
     int bt=8;
  /*   int i=0;
     int decimal[32];
     bitset<4> a(d);
     cout<<"\n"<<a<<endl;
    while(d>0){
        decimal[i]=d%2;
        d=d/2; 
        i++;
    }
    for(int y=i-1;y>=0;y--){
        cout<<decimal[y];
    }
    cout<<endl;
*/
    for(int y =4;y>=0;y--){
        int k = bt >> y;
        cout<<k;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
    cout<<endl;
    return 0;
} 