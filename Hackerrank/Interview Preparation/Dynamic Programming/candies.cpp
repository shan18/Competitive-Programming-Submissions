// C++
// Problem Statement: https://www.hackerrank.com/challenges/candies/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dynamic-programming


#include <bits/stdc++.h>

using namespace std;

// Complete the candies function below.
long candies(int n, vector<int> arr) {
    vector<int> left_right(n, 1);
    vector<int> right_left(n, 1);
    
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i-1])
            left_right[i] = left_right[i-1] + 1;
    }
    for(int i = n-2; i >= 0; i--) {
        if(arr[i] > arr[i+1])
            right_left[i] = right_left[i+1] + 1;
    }
    
    long sum = 0;
    for(int i = 0; i < n; i++)
        sum += max(left_right[i],  right_left[i]);
    
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
