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

class A {
public:
  void solve(std::istream& in, std::ostream& out) {
    char c, d;
    in >> c >> d;
    Point p = mp(c - 'a', d - '1');
    int cnt = 0;
    for (int dx = -1; dx <= 1; ++dx) {
      for (int dy = -1; dy <= 1; ++dy) {
        Point q = mp(p.X + dx, p.Y + dy);
        if (dx * dx + dy * dy > 0 &&
            0 <= q.X && q.X < 8 &&
            0 <= q.Y && q.Y < 8) {
          ++cnt;
        }
      }
    }
    out << cnt << endl;
  }
};
