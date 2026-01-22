#include<iostream>
#include<vector>
using namespace std;

vector<int> merge_two_sorted_array(vector<int>& v1, vector<int>& v2) {
    int n = v1.size();
    int m = v2.size();
    vector<int> v3(n + m);
    int i = n-1;
    int j = m-1;
    int k = n+m-1;
    while (i >=0 && j >=0) {
        if (v1[i] > v2[j]) {
            v3[k] = v1[i];
            i--;
        }
        else {
            v3[k] = v2[j];
            j--;
        }
        k--;
    }

    //condition for remaining elements
        while (i >=0) {
            v3[k] = v1[i];
            k--;
            i--;
        }

        while (j>=0) {
            v3[k] = v2[j];
            k--;
            j--;
        }
    
    return v3;
}

int main() {
    int n, m;
    cout << "Enter value of n and m: ";
    cin >> n >> m;

    vector<int> v1;
    cout << "Enter the elements of first vector: ";
    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        v1.push_back(q);
    }

    vector<int> v2;
    cout << "Enter the elements of second vector: ";
    for (int j = 0; j < m; j++) {
        int p;
        cin >> p;
        v2.push_back(p);
    }

    vector<int> v3 = merge_two_sorted_array(v1, v2);

    cout << "The merged sorted array is: ";
    for (int i = 0; i < v3.size(); i++) {
        cout << v3[i] << " ";
    }
    return 0;
}