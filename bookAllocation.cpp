#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int books[], int n, int budget) {
    int low = 0, high = n-1, mid, ans = -1;
    while (low <= high) {
        mid = (low+high)/2;
        if (books[mid] <= budget) {
            ans = mid;
            low = mid+1;
        }
        else high = mid-1;
    }
    return ans;
}

int main() {
    int n, budget;
    cout << "Enter the number of books: ";
    cin >> n;
    int books[n];
    cout << "Enter the price of books: ";
    for (int i = 0; i < n; i++)
        cin >> books[i];
    sort(books, books+n); // sorting the array
    cout << "Enter your budget: ";
    cin >> budget;
    int ans = binarySearch(books, n, budget);
    if (ans == -1) cout << "No book can be purchased within the budget\n";
    else cout << "Maximum number of books that can be purchased: " << ans+1 << endl;
    return 0;
}
