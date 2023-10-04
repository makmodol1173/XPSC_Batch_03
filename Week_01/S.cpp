#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int operations = 0;
        int currentMax = 0;
        
        for (int i = 0; i < n; i++) {
            currentMax = max(currentMax, a[i]);
            if (currentMax > i + 1) {
                int diff = currentMax - (i + 1);
                operations += diff;
                currentMax = i + 1;
            }
        }
        
        cout << operations << endl;
    }
    
    return 0;
}
