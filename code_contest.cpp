#include <algorithm>
#include <chrono>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

#define rep(i, a, b) for (int i = int(a); i < int(b); ++i)
#define rrep(i, a, b) for (int i = int(a); i >= int(b); --i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define mp make_pair
//#define f first
//#define s second
#define getunique(v)                                  \
    {                                                 \
        sort(v.begin(), v.end());                     \
        v.erase(unique(v.begin(), v.end()), v.end()); \
    }

#define caf const auto&

using lld = long double;
using ull = uint64_t;
using ll = int64_t;

using Index = pair<int, int>;

using pii = pair<int, int>;
using pll = pair<ull, ull>;
using pdd = pair<double, double>;
using vi = vector<int>;
using vvi = vector<vector<int> >;
using vvvi = vector<vector<vector<int> > >;

using vb = vector<bool>;
using vvb = vector<vector<bool> >;
using vvvb = vector<vector<vector<bool> > >;

double dmax = numeric_limits<double>::max();
int imax = numeric_limits<int>::max();

// template <typename num_t>
// using ordered_set = tree<num_t, null_type, less<num_t>, rb_tree_tag,
//                          tree_order_statistics_node_update>;

// benq - print any container + char_pair
template<typename T, typename = void>
struct is_iterable : false_type {
};

template<typename T>
struct is_iterable<T, void_t<decltype(begin(declval<T>())), decltype(end(declval<T>()))> > : true_type {
};

template<typename T>
typename enable_if<is_iterable<T>::value && !is_same<T, string>::value, ostream &>::type
operator<<(ostream &cout, T const &v);

template<typename A, typename B>
ostream &operator<<(ostream &cout, pair<A, B> const &p) {
    return cout << "(" << p.f << ", " << p.s << ")";
}

template<typename T>
typename enable_if<is_iterable<T>::value && !is_same<T, string>::value, ostream &>::type
operator<<(ostream &cout, T const &v) {
    cout << "[";
    for (auto it = v.begin(); it != v.end();) {
        cout << *it;
        if (++it != v.end()) cout << ", ";
    }
    return cout << "]";
}

template<typename A, typename B>
istream &operator>>(istream &cin, pair<A, B> &p) {
    cin >> p.first;
    return cin >> p.second;
}

mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
// mt19937_64 rng(61378913);
/* usage - just do rng() */

// use for atcoder
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-result"

void usaco(string filename) {
    freopen((filename + ".in").c_str(), "r", stdin);
    freopen((filename + ".out").c_str(), "w", stdout);
}

#pragma GCC diagnostic pop

vector<string> ReadInput() {
    vector<string> rst;

    std::string line;
    while (std::getline(std::cin, line)) {
        if (line.empty()) continue;
        rst.push_back(line);
    }

    return rst;
}

vector<string> ReadAllFileLines(const string &filename) {
    auto rst = vector<string>{};

    std::ifstream infile(filename);
    std::string line;
    while (std::getline(infile, line)) {
        rst.push_back(line);
    }
    return rst;
}

template<typename T>
string Join(const vector<T> &input, const string &split) {
    stringstream ss;
    for (size_t i = 0; i < input.size(); ++i) {
        if (i != 0) ss << split;
        ss << input[i];
    }

    return ss.str();
}

template<typename T>
vector<T> SplitLine(const string &s) {
    vector<T> rst;

    T t;
    stringstream ss(s);
    while (ss >> t) {
        rst.push_back(t);
    }

    return rst;
}

template<typename T>
vector<T> SplitLine(int n, const string &s) {
    vector<T> rst(n);

    stringstream ss(s);
    for (int i = 0; i < n; i++) {
        ss >> rst[i];
    }

    return rst;
}

// #include <atcoder/all>
// using namespace atcoder;

const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

// ll n, m, q, k, l, r, x, y, z;
// const ll template_array_size = 1e6 + 17646;
// string s, t;


struct Solve {
    auto Solution(const vector<string> &lines) {
        cout << "cpp" << endl;
        return lines;
    }
};

/*
ID: racer
TASK: sprime
LANG: C++
*/

int main() {
#ifdef LOCAL
    usaco("test");
    auto begin = std::chrono::high_resolution_clock::now();
#else
    usaco("sprime");
#endif

    caf lines = ReadInput();
    caf rst = Solve().Solution(lines);
    for (caf v: rst) {
        cout << v << "\n";
    }

#ifdef LOCAL
    auto end = std::chrono::high_resolution_clock::now();
    cerr << setprecision(4) << fixed;
    cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double> >(end - begin).count()
            << " seconds" << endl;
#endif
}
