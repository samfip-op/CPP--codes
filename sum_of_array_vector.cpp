#include <iostream>
#include <vector>
using namespace std;
int main() {
    int x;
    cin >> x;
    
    vector<int> arr(x);
    for(int i = 0 ; i < x; i++) {
        cin >> arr[i];
    }
    
    int sum = 0;
    for(int i = 0 ; i < x; i++) {
        sum = sum + arr[i];
    }
    
    cout << sum << endl;

    return 0;
}
