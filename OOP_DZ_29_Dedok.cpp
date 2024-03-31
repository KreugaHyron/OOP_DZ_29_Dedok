#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compareLength(const std::string& str1, const std::string& str2) {
    return str1.length() < str2.length();
}
class CompareLength {
public:
    bool operator()(const string& str1, const string& str2) {
        return str1.length() < str2.length();
    }
};
int main() {
	// 1.
    vector<string> vec = { "apple", "banana", "orange", "kiwi" };
    sort(vec.begin(), vec.end(), compareLength);
    for (const auto& str : vec) {
        cout << str << " ";
    }
	cout << endl;
    // 2.
    vector<string> vec_1 = { "apple", "banana", "orange", "kiwi" };
    sort(vec_1.begin(), vec_1.end(), CompareLength());
    for (const auto& str_1 : vec_1) {
        cout << str_1 << " ";
    }
    return 0;
}
