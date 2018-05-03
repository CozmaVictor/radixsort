#include <iostream>
using namespace std;
int n;
int v[100];
int v0[100],v1[100],v2[100],v3[100],v4[100],v5[100],v6[100],v7[100],v8[100],v9[100];
int i0, j0 , i1 , j1 , i2 , j2 , i3, j3 , i4 , j4 , i5 , j5 , i6 , j6 , i7 , j7 , i8 , j8 , i9 , j9;
int main()
{
    cout<<"n=";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"V["<<i<<"]=";
        cin>>v[i];}
    for(int i=i0;i<=j0;i++) cout<<v0[i];cout<<endl;
        {
            i0=1;j0=0;
            for(int i=1;i<=n;i++)
                {
                if(v[i]%10==0){j0++;v0[j0]=v[i];}
                }
        }
    for(int i=i1;i<=j1;i++) cout<<v1[i];cout<<endl;
            {
            i1=1;j1=0;
            for(int i=1;i<=n;i++)
                {
                if(v[i]%10==0){j1++;v1[j1]=v[i];}
                }
        }
    for(int i=i2;i<=j2;i++) cout<<v2[i];cout<<endl;
            {
            i2=1;j2=0;
            for(int i=1;i<=n;i++)
                {
                if(v[i]%10==0){j2++;v2[j2]=v[i];}
                }
        }
    for(int i=i3;i<=j3;i++) cout<<v3[i];cout<<endl;

            {
            i3=1;j3=0;
            for(int i=1;i<=n;i++)
                {
                if(v[i]%10==0){j3++;v3[j3]=v[i];}
                }
            }
    for(int i=i4;i<=j4;i++) cout<<v4[i];cout<<endl;
            {
            i4=1;j4=0;
            for(int i=1;i<=n;i++)
                {
                if(v[i]%10==0){j4++;v4[j4]=v[i];}
                }
            }
    for(int i=i5;i<=j5;i++) cout<<v5[i];cout<<endl;

            {
            i5=1;j5=0;
            for(int i=1;i<=n;i++)
                {
                if(v[i]%10==0){j5++;v5[j5]=v[i];}
                }
            }
    for(int i=i6;i<=j6;i++) cout<<v6[i];cout<<endl;
            {
            i6=1;j6=0;
            for(int i=1;i<=n;i++)
                {
                if(v[i]%10==0){j6++;v6[j6]=v[i];}
                }
            }
    for(int i=i7;i<=j7;i++) cout<<v7[i];cout<<endl;
            {
            i7=1;j7=0;
            for(int i=1;i<=n;i++)
                {
                if(v[i]%10==0){j7++;v7[j7]=v[i];}
                }
            }
    for(int i=i8;i<=j8;i++) cout<<v8[i];cout<<endl;
            {
            i8=1;j8=0;
            for(int i=1;i<=n;i++)
                {
                if(v[i]%10==0){j8++;v8[j8]=v[i];}
                }
            }
    for(int i=i9;i<=j9;i++) cout<<v9[i];cout<<endl;
        {
            i9=1;j9=0;
            for(int i=1;i<=n;i++)
            {
                if(v[i]%10==0){j9++;v9[j9]=v[i];}
            }
        }
        for(int i=1;i<=n;i++)
        cout<<v[i]<<"; ";
}
