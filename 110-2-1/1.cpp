#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    int k,q;
    cout<<"輸入考生人數"<<endl;
    cin>>q;
    k=q+1;
    int a[k][7];
    cout<<"輸入表格資料（空白部分填零）"<<endl;
    for(int x=0 ; x<k ; x++){
        for(int y=0 ; y<7 ; y++){
            cin>>a[x][y];
        }
    }

    int t,s;
    cout<<"輸入學校數"<<endl;
    cin>>s;
    t=s+1;
    int b[t][8];
    cout<<"輸入招生資料"<<endl;
    for(int z=0 ; z<t ; z++){
        for(int o=0 ; o<8 ; o++){
            cin>>b[z][o];
        }
    }

    int  d, e, f, g, h ,i,j;
    for (i=1;i<=q;i++){
        d=3;
        for (j=1;j<=d;j++){
            e = a[i][j + 1];
            if (e != 0) {
                f = b[e][ 2];
                if (f > 0 ){
                    b[e][ f + 3] = i;
                    b[e][2] = b[e][2] - 1;
                    a[i][5] = e ;
                    a[i][6] = j ;
                    break;
                }
            }
        }
    }
    for (i=1;i<=3;i++) {
        g = 4;
        h = b[i][g];
        while (h == 0){
            g = g + 1;
            h = b[i][ g];
        }
        b[i][7] = a[h][1];
    }
    for (i = 1;i<=3;i++)
        b[i][3] = b[i][ 1]- b[i][2];
    for(i = 1 ;i<= q;i++){
        for (j=0;j<=6;j++){
            printf("%5d",a[i][j]);
        }
        cout<<endl;
    }
    cout<<endl;
    for (i=1;i<=s;i++){
        for(j=0;j<=7;j++){
            printf("%5d",b[i][j]);
        }
        cout <<endl;
    }
    cout <<endl;
    return 0;
}
 
