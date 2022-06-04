

int strStr(char * haystack, char * needle){
    if(!strlen(needle)) return 0;
    if(strlen(needle)>strlen(haystack)) return -1;
    int i=0;
    while(i<=strlen(haystack)-strlen(needle))
        if(!strncmp(haystack+i,needle,strlen(needle))) return i;
        else i++;
    return -1;
}