int main() {
int x = 2;
int y = 3;
int z;
z = ((x + y)*4/2)%7;
int * ptr = &x;
int arr[8];
if(x == y && z>=0 || z != 6)
{
    z = x;
}
int a;
a = x!=y ? x-y : y-x;
for(a=2;a<=5;)
{
    a = a+1;
}
printInt(x);
printStr("+");
printInt(y);
printStr(" = ");
printInt(z);
return 0;
}

int hex = 0;

void hello(int x, int * y)
{
    printStr("hii");
    return;
}