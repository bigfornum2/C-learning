#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <array>
#include <forward_list>
#include <list>
#include <stack>
#include <sstream>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <ctime>

using namespace std;

int main() {
    unordered_set<int> us;
    us.bucket_size(123);
    unordered_map<int, int> mappings;
    us.insert(11);
    for (auto val : us) {
        cout << val << endl;
    }

    set<int> ss;
    multiset<int> multSS;
    cout << sizeof multSS << endl;
    map<int, int> mappings;
    multimap<int, int> mulmap;
    cout << sizeof mulmap << endl;
    cout << sizeof ss << endl;
    cout << sizeof mappings << endl;
}
