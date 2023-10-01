#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> v(M);
    for (int i = 0; i < M; i++) {
        cin >> v[i];
    }
    vector<int> v1(N);
    int s = 0;
    for (int i = 0; i < M; i++) {
        for (int j = s; j < v[i]; j++) {
            v1[j] = v[i] - j - 1;
        }
        s = v[i];
    }
    for (int i = s; i < N; i++) {
        v1[i] = i - s;
    }
    for (int i = 0; i < N; i++) {
        cout << v1[i] << endl;
    }
    return 0;
}
