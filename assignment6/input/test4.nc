// Swap two numbers
int swap(int p, int q, int*z) {
    int t;
    t = p;
    p = q;
    q = t;
    return 1;
}
int main() {
    int x;
    int y;
    int z;
    x = readInt(&z);
    y = readInt(&z);
    printStr("Before swap:\n");
    printStr("x = "); printInt(x);
    printStr(" y = "); printInt(y);
    swap(&x, &y, &z);
    printStr("\nAfter swap:\n");
    printStr("x = "); printInt(x);
    printStr(" y = "); printInt(y);
    return 0;
}

