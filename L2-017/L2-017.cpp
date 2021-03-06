#include <iostream>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);//如果用cin就得把这个加上,不加会超时，否则就用scanf
    //你卡我一个cin我是真没想到
    int N,tmp;
    multiset<int>data;
    cin>>N;
    for (int i = 0; i <N ; ++i) {
        //scanf("%d",&tmp);
        cin>>tmp;
        data.insert(tmp);
    }
    int flag=N/2+1;
    auto i = data.begin();
    int Outgoing=0,Introverted=0;
    for (int j = 1; j <flag ; ++j,++i)
        Outgoing+=*i;
    for (int j = flag; j <=N ; ++j,++i)
        Introverted+=*i;
    printf("Outgoing #: %d\nIntroverted #: %d\nDiff = %d",N-flag+1,flag-1,abs( Introverted-Outgoing));
}