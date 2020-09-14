#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int a[n];
        int x;
        int sum=0;
        int max=0,j;

        int i;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        max=a[0];
        for(i=1;i<n;i++){
            if(max<=a[i]){
                max=a[i];
            }
        }
        for(j=0;j<n;j++){
            sum+=max-a[j];
        }
        printf("%d\n",sum);
    }
}
