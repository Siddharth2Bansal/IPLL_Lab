// testing relational operations and logical operations
int main()
{
    int y = 3;
    int x = 5;
    int z = 0;
    if (x >= 2)
        z = 1;
    printInt(z);
    if (y >= 7 || x != 0)
    {
        z = 3;
    }
    printInt(z);
    if (y >= 2 && x != 0)
    {
        z = 4;
    }
    printInt(z);
    if (!(y <= 2) && x != 0 && z == 4)
    {
        z = 5;
    }
    printInt(z);
    return 0;
}