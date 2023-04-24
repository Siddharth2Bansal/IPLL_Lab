// Swap two numbers
int swap(int* p, int* q);
int main() {
int x;
int y;
int err;
x = readInt(&err);
y = readInt(&err);
printStr("Before swap:\n");
printStr("x = "); printInt(x);
printStr(" y = "); printInt(y);
swap(&x, &y);
printStr("\nAfter swap:\n");
printStr("x = "); printInt(x);
printStr(" y = "); printInt(y);
return 0;
}
int swap(int *p, int *q) {
int t;
t = *p;
*p = *q;
*q = t;
return 0;
}