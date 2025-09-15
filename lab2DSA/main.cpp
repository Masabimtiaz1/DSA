#include <iostream>
#include <string>
using namespace std;


int findSubstring(const string& text, const string& pattern) {
    
    if (pattern.empty()) return 0;

    int n = text.size();
    int m = pattern.size();

    if (m > n) return -1; 

    for (int i = 0; i <= n - m; i++) {
        const char* t = text.c_str() + i;     
        const char* p = pattern.c_str();      
        bool match = true;

        
        for (int j = 0; j < m; j++) {
            if (*(t + j) != *(p + j)) {
                match = false;
                break;
            }
        }

        if (match) return i;  
    }

    return -1; 
}

int main() {
  
    cout << "Test 1 (pattern at beginning): "
         << findSubstring("hello world", "hello") << endl;

    cout << "Test 2 (pattern at end): "
         << findSubstring("openai rocks", "rocks") << endl;

    cout << "Test 3 (pattern not present): "
         << findSubstring("abcdef", "gh") << endl;


    cout << "Test 4 (empty pattern): "
         << findSubstring("abcdef", "") << endl;

    return 0;
}
