#include <iostream>
using namespace std;
int main()
{

    //problem --A
/*     int x;
    string alpha=" abcdefghijklmnopqrstuvwxyz";
    
    for(int i=0; i<26 ;i++)
    {
        cin>> x;
        x--;
        cout<< alpha[x] ;
    }  */
//problem --B
/* int x,p,q,sum=0;
cin>> x;
for(int i=0;i<x;i++)
{
    cin>> p >>q;
if(q-p>=2)
{
    sum+=1;
}
}
cout<< sum;
 */


//problem --C

/* int n,sum=0;
int team[3],s;
cin>> n;
for(int i=0;i<n;i++)
{
    s=0;
    for(int j=0; j<3;j++)
    {
        cin>> team[j];
    }
    for(int l=0;l<3;l++)
    {
        s+=team[l];
    }
    if(s>=2)
    {
        sum+=1;
    }
}
cout<< sum;

 */

//problem --D
/* 
 int k,n;
cin>> n>> k;
for(int i=0;i<k;++i)
{
    if(n%10==0)
    {
        n/=10;
    }
    else 
    {
        --n;
    }
}
cout<< n; 
    return 0; 
 */


    //problem --E

/* 
int  n;
    cin>>n;
        if(n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0 || n%444==0 || n%474==0 ||n%477==0 || n%777==0 || n%747==0 || n%774==0)
        {
            cout<<"YES" << endl;
        }
        else
        {
            cout<<"NO" << endl;
        } */



        //problem --G
/*         int n;
        int a[15][15];
            cin>> n;
                for(int i=1; i<=1 ;i++)
                {
                    for(int j=1;j<=n;j++)
                        a[i][j]=1;
                }
                for(int i=2;i<=n;i++){
                    a[i][1]=1;
                        for(int j=2;j<=n;j++)
                        {
                                a[i][j]=a[i-1][j]+a[i][j-1];
                        }
                }
                            cout<<a[n][n]; 
 */

        //problem --E
/*     int x = 0;
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= 5; ++j)
        {
            cin >> x;
            if (x == 1)
            {
                cout << abs(i - 3) + abs(j - 3) << endl;
            }
        }
    } */



return 0;
}