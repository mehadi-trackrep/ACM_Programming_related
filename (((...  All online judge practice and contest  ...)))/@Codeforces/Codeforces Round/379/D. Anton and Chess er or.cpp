#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

inline int in_int()
{
	int n;
	scanf("%d", &n);
	return n;
}

struct figurine
{
	char kind;
	int x, y;
};

int n;
int x0, y0;
figurine nearest[8];

inline int dist(int x1, int y1, int x2, int y2)
{
	return max(abs(x1 - x2), abs(y1 - y2));
}

inline void upd_nearest(figurine& was, figurine cur)
{
	if (was.kind == '?' ||
	    dist(x0, y0, cur.x, cur.y) < dist(x0, y0, was.x, was.y))
	was = cur;
}

inline int get_direction(figurine cur)
{
	// vertical
	if (cur.x == x0 && cur.y < y0) return 0;
	if (cur.x == x0 && cur.y > y0) return 1;
	// horizontal
	if (cur.y == y0 && cur.x < x0) return 2;
	if (cur.y == y0 && cur.x > x0) return 3;
	// diagonal 1
	if ((cur.y - y0) == (cur.x - x0) && cur.x < x0) return 4;
	if ((cur.y - y0) == (cur.x - x0) && cur.x > x0) return 5;
	// diagonal 2
	if ((cur.y - y0) == (x0 - cur.x) && cur.y < y0) return 6;
	if ((cur.y - y0) == (x0 - cur.x) && cur.y > y0) return 7;
	// the piece doesn't lie on any of the eight directions
	return -1;
}

int main()
{
	while(cin >> n)
    {

        x0 = in_int(); y0 = in_int();

        for (int i = 0; i < 8; i++)
            nearest[i].kind = '?';
        // read and update nearest
        for (int i = 0; i < n; i++)
        {
            figurine cur;
            string s;
            cin >> s;
            cur.x = in_int(); cur.y = in_int();
            cur.kind = s[0];
            int dir = get_direction(cur);
            if (dir >= 0)
                upd_nearest(nearest[dir], cur);
        }
        bool ans = false;
        // check verticals and horizontals
        for (int i = 0; i < 4; i++)
            if (nearest[i].kind == 'R' || nearest[i].kind == 'Q')
                ans = true;
        // check diagonals
        for (int i = 4; i < 8; i++)
            if (nearest[i].kind == 'B' || nearest[i].kind == 'Q')
                ans = true;
        // output
        puts(ans ? "YES" : "NO");
    }

	return 0;
}
