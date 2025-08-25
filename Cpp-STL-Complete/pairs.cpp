// part of cpp utility library
#include <iostream>
#include <vector>// no need of inclluding any extra header file, this vector is included as it is used

using namespace std;

int main(int argc, char const *argv[]){
    pair<string, int> p = {"jit", 1}; // no need of inclluding any extra header file

    cout << p.first << " " << p.second << endl;

    pair<string, pair<int, pair<int, int>>> p2;
    pair<string, pair<int, int>> p3;

    cout << p3.first << " " << p3.second.first << " " << p3.second.second << endl;

    vector<pair<int, char>> vec = { {1,2}, {3,4}, {5,6}, {7,8} };

    vec.push_back({9, 10}); // push_back requires manual passing of required object
    vec.emplace_back(11,12); // emplace_back creates object in place for us. MORE EFFICIENT

    for (pair<int, int> p : vec) {
        cout << p.first << " " << p.second << endl;
    }

    pair<vector<int>, char> p4 = { {2,3,4,5}, 'a' };

    return 0;
}
