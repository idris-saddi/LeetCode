bool isPowerOfThree(int n){
        int i=0;
    while(pow(3,i)<n)i++;
    return(pow(3,i)==n);
}