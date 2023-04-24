// Add two numbers from input


int main() {
int x;
int y;
int z;
x = readInt(&z);
y = readInt(&z);
z = x + y;
printInt(x);
printStr("+");
printInt(y);
printStr(" = ");
printInt(z);
return 0;
}

