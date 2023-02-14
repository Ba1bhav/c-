#include <iostream>
using namespace std;
int Butterfly()
{   cout<<"\t\t\tButterFly Pattern \n";
        /* 

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
    */
    int n;
    cout<<"Enter Size for Butterfly : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int s=1;s<=i;s++){
            cout<<"*";
        }
        for(int b=1;b<=n-i;b++){
            cout<<" ";
        }
        for(int b=1;b<=n-i;b++){
            cout<<" ";
        }
        for(int s=1;s<=i;s++){
            cout<<"*";
        }
    cout<<endl;
    }
    //lower opposite
    for(int i=0;i<=n;i++){
        for(int b=1;b<=n-i;b++){
            cout<<"*";
        }
        for(int s=1;s<=i;s++){
            cout<<" ";
        }
        
        for(int s=1;s<=i;s++){
            cout<<" ";
        }
        
        for(int b=1;b<=n-i;b++){
            cout<<"*";
        }
    cout<<endl;
    }

    return 0;
}



int Flyod(){
    cout<<"\t\t\t\tFlyod-Pattern \n";
    cout<<"Enter Size for Flyod Pattern :";
    /*
        1
        22
        333
        4444
        55555
    */
    int n;
    cin>>n;
    for(int x=1; x<=n;x++){
        for(int z=1; z<=x;z++){
            cout<<x;
        }
        cout<<endl;
    }

    return 0;
}

int main()
{
    bool x;
    cout<<"Enter 1 for Butterfly() and 0 for Flyod() ";
    cin>>x;
    x==1?Butterfly():Flyod();
}



