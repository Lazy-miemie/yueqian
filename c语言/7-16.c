#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int maxScore(char *s){
    int right1 =0;
    for(int i =0;s[i];i++){
        right1+=s[i]-'0';
    }
    int ans=0,left0 = 0;
    for(int i =0;s[i+1];i++){
        if(s[i]==0){
            left0++;
        }else{
            right1--;
        }
        ans = MAX(ans,(left0+right1));
    }
    return ans;
}

int main(int argc, char const *argv[])
{

    return 0;
}
