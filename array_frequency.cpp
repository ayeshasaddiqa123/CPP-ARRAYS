#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Frequency {
private:
    int arr[10];
    unordered_map<int,int> freq; // store counts for any integer (including negatives)
    vector<int> order; // preserve first-occurrence order

public:
    // Read 10 integers from stdin and build frequency map
    void input() {
        cout << "Enter 10 numbers: ";
        for (int i = 0; i < 10; ++i) {
            cin >> arr[i];
            if (freq.find(arr[i]) == freq.end()) {
                order.push_back(arr[i]);
            }
            ++freq[arr[i]];
        }
    }

    // Optional: display the original array
    void displayArray() const {
        cout << "\nThe array you entered: ";
        for (int i = 0; i < 10; ++i) cout << arr[i] << " ";
        cout << "\n";
    }

    // Display frequency of each unique number in first-occurrence order
    void displayFrequencies() const {
        cout << "\nFrequency of each number:\n";
        for (int x : order) {
            auto it = freq.find(x);
            int count = (it != freq.end()) ? it->second : 0;
            cout << x << " appears " << count << " time(s)\n";
        }
    }
};

int main() {
    Frequency f;
    f.input();
    f.displayArray();
    f.displayFrequencies();
    return 0;
}