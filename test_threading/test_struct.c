#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point pt1;
    struct point pt2;
};

struct point makepoint(int x, int y) {

    struct point temp;

    temp.x = x;
    temp.y = y;
    return temp;
}

struct point addpoint(struct point p1, struct point p2)
{
    p1.x += p2.x;
    p1.y += p2.y;
    return p1;
}

int ptinrect(struct point p, struct rect r)
{
    int result = (p.x >= r.pt1.x && p.x < r.pt2.x) && (p.y >= r.pt1.y && p.y < r.pt2.y);
    return result;
}

int main(void)
{
    struct point p1 = makepoint(12, 14);
    struct point p2 = makepoint(13, 15);
    struct point p3 = addpoint(p1, p2);
    struct rect r;
    r.pt1 = p1;
    r.pt2 = p2;
    int result = ptinrect(p3, r);
    if (result) {
        printf("%s", "P3 locates inside of r");
    }
    else {
        printf("%s", "P3 locates outside of r");
    }
    return 1;
}