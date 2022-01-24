
float Factorial(int n){
    long double factorial = 1.0;

    if (n < 0)
        return -1.0;
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        } 
    }
    return factorial;
}

float Kombinace(int k, int n){
    float vysledek=(Factorial(n))/(Factorial(k)*Factorial(n-k));
    return vysledek;
}

float Kombinace(int k, int n){
    float vysledek=(Factorial(n))/(Factorial(n-k));
    return vysledek;
}

float Permutace(int n){
    return Factorial(n);
}
