#include <iostream>
#include <vector>
using namespace std;

int n;
int aman[200001];

int main(){
    cin >> n;
    for(int i=1;i<=n;i++) cin >> aman[i];

    vector<int> dp;

    int running_minimum = n;
    for (int posisi=1; posisi<=n; posisi++){
        dp.push_back(running_minimum);

        if (aman[posisi] <= posisi){
            dp[posisi - aman[posisi]]--; //update safe zone
            running_minimum = min(running_minimum, dp[posisi-aman[posisi]]);
        }
    }

    cout << running_minimum;
}