// test file for pointers and basic integers
int main() {
    int x = 2;
    int y = 3;
    int z;
    int* p = &x;
    *p = 5;
    y = 5 * *p;
    z = x + y;
    printInt(x);
    printStr("+");
    printInt(y);
    printStr(" = ");
    printInt(z);
    return 0;
}