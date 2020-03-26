#include <iostream>

using namespace std;

int max(int *iptr[], int n) {
    if(n <= 100) {
        int temp = 0;
        for (int i = 0; i < n; i++) {
            if (*iptr[i] > temp)
                temp = *iptr[i];
        }
        return temp;
    }
}

int main() {
    int n, i;
    int array[100];
    int *iptr[100];
    cin >> n;
    for ( i = 0; i < n ; i++) {
        cin >> array[(i+3) % n];
        iptr[i] = &(array[(i+3) % n]);
    }

    cout << max(iptr, n) << endl;
    return 0;
}