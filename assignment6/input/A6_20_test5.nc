// testing arrays

int arr[5];

int main()
{
    int y = 0;
    arr[2] = y;
    arr[0] = 6;
    arr[2] = arr[0] + arr[2];
    int x = arr[2];
    printInt(x);    
    int ar[5];
    ar[0] = 3;
    x = ar[0];
    printInt(x);
    return 0;
}