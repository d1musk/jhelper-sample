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
const ll INF = 1000 * 1000 * 1000;

void check(bool c) { if (!c) throw 1; }

class E {
public:
  void solve(std::istream& in, std::ostream& out) {
    ll n, x, y;
    in >> n >> x >> y;
    ll res = 0;
    while (n > 0) {
      if (n % 2 != 0) {
        res += x;
        --n;
      } else {
        res += min(y, x * (n / 2));
        n /= 2;
      }
    }
    out << res << endl;
  }
};
