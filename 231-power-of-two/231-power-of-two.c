bool isPowerOfTwo(int n){
    int i=0;
    while(pow(2,i)<n)i++;
    return(pow(2,i)==n);
}