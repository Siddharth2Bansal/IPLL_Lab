// testing global variables 
int ar = 4;
int ar2;
int main()
{
    int x;
    int y;
    x = ar;
    ar2 = ar;
    ar = x;
    y = x;

    printInt(x);
    return 0;
}