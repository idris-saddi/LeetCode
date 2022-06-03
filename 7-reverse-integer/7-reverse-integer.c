

int reverse(int y){
    if(y<10&&y>-10) return y;
    int sig=-1;long s=0,x=y;
    if(x>0) sig=1;else x=-x;
    while(x) {
        s=x%10+s*10;
        x/=10;
    }
    if (s >= pow(2, 31) - 1 || s <=pow(-2, 31))  return 0;
    return(sig*s);
}