int factorial(int n) {
    if( n == 0) return 1;
    else if( n == 1) return 1;
    else if( n == 2) return 2;
    else if( n == 3) return 6;
    else if( n == 4) return 24;
    else if( n == 5) return 120;
    else return n * factorial(n - 1);
}