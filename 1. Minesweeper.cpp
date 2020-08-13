#include <iostream>
using namespace std;
//Minesweeper
int main()
{
    int i,j,flag;
    flag=0;
    while(true)
    {
        char como;
        cin>>i>>j;
        if(i==0&&j==0)break;
        int  arr2[i+2][j+2]={};
        for (int k=1; k<=i; k++)
        {
            for (int l=1; l<=j; l++)
            {
                cin>>como;
                if(como == '*')
                {
                    arr2[k][l]=-1;
                    if(arr2[k-1][l-1]!=-1)arr2[k-1][l-1]+=1;
                    if(arr2[k-1][l]!=-1)arr2[k-1][l]+=1;
                    if(arr2[k-1][l+1]!=-1)arr2[k-1][l+1]+=1;

                    if(arr2[k][l-1]!=-1)arr2[k][l-1]+=1;
                    if(arr2[k][l+1]!=-1)arr2[k][l+1]+=1;

                    if(arr2[k+1][l-1]!=-1)arr2[k+1][l-1]+=1;
                    if(arr2[k+1][l]!=-1)arr2[k+1][l]+=1;
                    if(arr2[k+1][l+1]!=-1)arr2[k+1][l+1]+=1;
                }
            }
        }
        cout<<"Flag#: "<<++flag<<":"<<endl;
        for (int k=1; k<=i; k++)
        {
            for (int l=1; l<=j; l++)
            {
                if (arr2[k][l]==-1) cout<<'*'<<" ";
                else cout<<arr2[k][l]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
