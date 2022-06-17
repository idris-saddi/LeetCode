int isNoZero(int x){
    if(x<1) return 0;
    if(x<10&&x>0) return 1;
    return(isNoZero(x/10)&&(x%10!=0));
}
int* getNoZeroIntegers(int n, int* returnSize){
    int *t=(int*)malloc(8);
    *returnSize=2;
    int i=1;
    while(!(isNoZero(i)&&isNoZero(n-i))) i++;
    t[0]=i;t[1]=n-i;
    return t;
}