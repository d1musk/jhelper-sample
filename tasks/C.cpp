#include <algorithm>
#include <array>
#include <climits>
#include <cmath>
#include <cstdint>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <queue>
#include <vector>

using namespace std;

#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define mp make_pair
#define X first
#define Y second

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<int, int> Point;
typedef vector<Point> vp;
typedef vector<vp> vvp;

bool DBG = false;

void check(bool c) { if (!c) throw 1; }

template<typename T>
ostream& operator << (ostream& os, const vector<T>& v) {
  forn(i, v.size()) {
    os << (i > 0 ? " " : "") << v[i];
  }
  return os;
}

template<typename T>
ostream& operator << (ostream& os, const vector<vector<T>>& v) {
  forn(i, v.size()) {
    os << v[i] << endl;
  }
  return os;
}


class C {
public:
  void solve(std::istream& in, std::ostream& out) {
    int n;
    in >> n;
    int m = n / 2;
    int odd = 1, even = 2;
    vvi v(n, vi(n));
    forn(i, n) {
      forn(j, n) {
        int k = i <= m ? i : 2 * m - i;
        if (j >= m - k && j <= m + k) {
          v[i][j] = odd;
          odd += 2;
        } else {
          v[i][j] = even;
          even += 2;
        }
      }
    }
    out << v << endl;
  }

};
