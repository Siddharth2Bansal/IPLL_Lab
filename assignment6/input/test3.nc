
int ar = 4;
//int * ptr;
//int * ptr2;
int ar2;
int main()
{
    int x;
    int y;
    x = ar;
    //ptr = &x;
    //ptr2 = ptr;
    //int *ptr_in = ptr;
    //int* ptr_in2 = ptr_in;
    ar2 = ar;
    ar = x;
    y = x;

    printInt(x);
    return 0;
}