int hello();

int hel(int x);

int main() {
int x = 2;
int y = 3;
int z = 1;
int m;
m = x > y? x: y;
m = m > z? m: z;
printStr("max(");
printInt(x); printStr(", ");
printInt(y); printStr(", ");
printInt(z); printStr(") = ");
printInt(m);
hello();
hel();
return 0;
}

int hello()
{
    printStr("yay");
    return 0;
}

int hel(int x)
{
    return x;
}