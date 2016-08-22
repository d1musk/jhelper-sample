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
ostream& operator << (ostream& os, const vl& v) {
  forn(i, v.size()) {
    os << (i > 0 ? " " : "") << v[i];
  }
  return os;
}

class B {
public:
  void solve(std::istream& in, std::ostream& out) {
//    test();
    int n;
    in >> n;
    ll sum = 0;
    vl a(n);
    forn(i, n) {
      ll x;
      in >> x;
      a[i] = x;
    }
    sort(a.begin(), a.end());
    out << solve(n, a) << endl;
  }

  ll solve(int n, vl a) {
    return a[(n - 1) / 2];
  }

  ll naive(int n, vl a) {
    const ll p9 = 1000 * 1000 * 1000;
    ll min_sum = p9 * p9;
    ll res = a[0];
    forn(i, n) {
      auto val = a[i];
      ll sum = 0;
      forn(j, n) {
        sum += abs(a[j] - val);
      }
      if (sum < min_sum) {
        min_sum = sum;
        res = a[i];
      }
    }
    return res;
  }

  vl gen(int len, ll lower, ll upper) {
    vl v(len);
    forn(i, len) {
      v[i] = -lower + rand() % (upper - lower + 1);
    }
    return v;
  }

  void test() {
    srand(123);
    int nTests = 100000;
    int llen = 1, rlen = 10;
    ll lower = -1000000000L;
    ll upper = 1000000000L;
    forn(t, nTests) {
      for (int len = llen; len <= rlen; ++len) {
        auto v = gen(len, lower, upper);
        sort(v.begin(), v.end());
        ll r1 = solve(len, v);
        ll r2 = naive(len, v);
        if (r1 != r2) {
          cout << len << ":\nv: " << v << "\nr1: " << r1 << "\nr2: " << r2 << endl;
          throw 1;
        }
        cout << t + 1 << ", len = " << len << " - OK" << endl;
      }
    }
    exit(0);
  }
};
