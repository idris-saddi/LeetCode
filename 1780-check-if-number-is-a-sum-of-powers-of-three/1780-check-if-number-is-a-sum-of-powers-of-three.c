bool checkPowersOfThree(int n){
    while(n>1){
        while(n%3==0) n/=3;
        if(n%3==2) return false;
        n--;
    }
    return true;
}