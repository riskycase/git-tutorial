int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) fact *= n;
    return fact;
}