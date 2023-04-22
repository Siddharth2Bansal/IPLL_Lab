// test file for pointer and arrays
int main()
{
    int arr[4];
    int x;
    int* ptr = &x;
    arr[0] = 4;
    int y;
    y = *ptr * 4;
    y = 4 * *ptr;
    y = arr[0] * 4;
    y = 4 * arr[0];
    return 0;
}