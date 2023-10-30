#include <iostream>
using namespace std;

    int main(){
        int d,m;
        ios_base::sync_with_stdio (0); 
        cin. tie(0);
        cout.tie(0);
        cin>>m>>d;
        if (1<=d<=31&&m==1) cout<<"YES";
        else if (1<=d<=28&&m==2) cout<<"YES";
        else if (1<=d<=31&&m==3) cout<<"YES"; 
        else if (1<=d<=30&&m==4) cout<<"YES";
        else if (1<=d<=31&&m==5) cout<<"YES";
        else if (1<=d<=30&&m==6) cout<<"YES";
        else if (1<=d<=31&&m==7) cout<<"YES";
        else if (1<=d<=31&&m==8) cout<<"YES";
        else if (1<=d<=30&&m==9) cout<<"YES"; 
        else if (1<=d<=31&&m==10) cout<<"YES"; 
        else if (1<=d<=30&&m==11) cout<<"YES";
        else if (1<=d<=31&&m==12) cout<<"YES";
        else cout<<"NO";
    return 0;
}