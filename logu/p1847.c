/*************************************************************************
	> File Name: p1847.c
	> Author: 
	> Mail: 
	> Created Time: 2019年04月13日 星期六 08时41分27秒
 ************************************************************************/

#include <iostream>
using namespace std;
int n,m,x1[10001],y1[10001],x2[10001],y2[10001],x[10001],y[10001],d[2001],p[2001]; //d数组存被炸的次数，p数组存最后一轮是第几轮
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
    for(int i=1;i<=m;i++)
    cin>>x[i]>>y[i];//输入
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) //每一个关键点搜过去
        {
            if(x[j]>=x1[i]&&x[j]<=x2[i]&&y[j]>=y1[i]&&y[j]<=y2[i]) //如果恰好这个点被轰炸了，那么轰炸次数++，最后一轮变为本轮
            d[j]++,p[j]=i;
        }
    }
    for(int i=1;i<=m;i++)
    {
        if(d[i]==0){cout<<"NO"<<endl;continue;}
        cout<<"YES "<<d[i]<<" "<<p[i]<<endl; 
    } //输出，完了？？？
}
