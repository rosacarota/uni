#include <stdio.h>
#include "btree.h"

int main(void) {
    Btree h, a, d, l, o, q, c, p, s;

    h = newBtree();
    a = newBtree();
    d = newBtree();
    l = newBtree();
    o = newBtree();
    q = newBtree();
    c = newBtree();
    p = newBtree();
    s = newBtree();

    o = consBtree('o', NULL, NULL);
    q = consBtree('q', NULL, NULL);
    l = consBtree('l', o, q);
    d = consBtree('d', NULL, NULL);
    a = consBtree('a', d, l);
    s = consBtree('s', NULL, NULL);
    p = consBtree('p', NULL, NULL);
    c = consBtree('c', p, s);
    h = consBtree('h', a, c);

    inorder(h);

    putchar('\n');

    return 0;
}
