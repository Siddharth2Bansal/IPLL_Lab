// Auxiliary function for printing
void print1(){
    printf("My name is nanoC");
    return;
}

void print2(int a, int b)
{
    printf("%d < %d", a, b);
    return;
}

/* The main function which prints and does comparisons 
    in nanoC */
int main(){
    print1();
    char a[] = 'f\\gh';
    int x1a = +1;
    int y0y0 = -2;
    int *ptr;
    ptr = &y0y0;
    *ptr = x1a + 10;
    if (x1a>y0y0){
        print2(y0y0, x1a);
    }
    else{
        print2(x1a, y0y0);
    }
    return 0;
}