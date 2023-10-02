#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[10][10];
        for(int i=0; i<10; i++)
        {
            for(int j=0; j<10; j++)
            {
                cin>>a[i][j];
            }
        }
        int p1=0,p2=0,p3=0,p4=0,p5=0;
        for(int i=0; i<10; i++)
        {
            if(a[i][0]=='X')
            {
                p1++;
            }
            if(a[i][9]=='X')
            {
                p1++;
            }
        }
        for(int i=1; i<9; i++)
        {
            if(a[0][i]=='X')
            {
                p1++;
            }
            if(a[9][i]=='X')
            {
                p1++;
            }
        }
        for(int i=1; i<9; i++)
        {
            if(a[1][i]=='X')
            {
                p2+=2;
            }
            if(a[8][i]=='X')
            {
                p2+=2;
            }
        }
        for(int i=2; i<8; i++)
        {
            if(a[i][1]=='X')
            {
                p2+=2;
            }
            if(a[i][8]=='X')
            {
                p2+=2;
            }
        }
        for(int i=2; i<8; i++)
        {
            if(a[2][i]=='X')
            {
                p3+=3;
            }
            if(a[7][i]=='X')
            {
                p3+=3;
            }
        }
        for(int i=3; i<7; i++)
        {
            if(a[i][2]=='X')
            {
                p3+=3;
            }
            if(a[i][7]=='X')
            {
                p3+=3;
            }
        }
        for(int i=3; i<7; i++)
        {
            if(a[3][i]=='X')
            {
                p4+=4;
            }
            if(a[6][i]=='X')
            {
                p4+=4;
            }
        }
        for(int i=4; i<6; i++)
        {
            if(a[i][3]=='X')
            {
                p4+=4;
            }
            if(a[i][6]=='X')
            {
                p4+=4;
            }
        }
        if(a[4][4]=='X') p5+=5;
        if(a[4][5]=='X') p5+=5;
        if(a[5][4]=='X') p5+=5;
        if(a[5][5]=='X') p5+=5;

        long long int points=p1+p2+p3+p4+p5;
        cout<<points<<"\n";
    }
    return 0;
}
