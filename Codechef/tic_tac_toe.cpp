#include <iostream>
#define long long int
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s1,s2,s3;
	    cin>>s1>>s2>>s3;
	    
	   // int c1=0;c2=0;c3=0;
	    int cx=0,co=0,blank=0;
	    for(int i=0;i<3;i++)
	    {
	        if(s1[i]=='X')
	            cx++;
            else if(s1[i]=='O')
                co++;
            else
                blank++;
	    }
	    
	    for(int i=0;i<3;i++)
	    {
	        if(s2[i]=='X')
	            cx++;
            else if(s2[i]=='O')
                co++;
            else
                blank++;
	    }
	    
	    for(int i=0;i<3;i++)
	    {
	        if(s3[i]=='X')
	            cx++;
            else if(s3[i]=='O')
                co++;
            else
                blank++;
	    }
	   // cout<<cx<<" "<<co<<endl;
	   int xflag=0,oflag=0,draw=0;
        if((s1[0]=='X' && s1[1]=='X' && s1[2]=='X') || (s2[0]=='X' && s2[1]=='X' && s2[2]=='X') || (s3[0]=='X' && s3[1]=='X' && s3[2]=='X') || (s1[0]=='X' && s2[0]=='X' && s3[0]=='X')
        || (s1[1]=='X' && s2[1]=='X' && s3[1]=='X') || (s1[2]=='X' && s2[2]=='X' && s3[2]=='X') || (s1[0]=='X' && s2[1]=='X' && s3[2]=='X') || (s1[2]=='X' && s2[1]=='X' && s3[0]=='X'))
        {
            xflag=1;
        }
	    if((s1[0]=='O' && s1[1]=='O' && s1[2]=='O') || (s2[0]=='O' && s2[1]=='O' && s2[2]=='O') || (s3[0]=='O' && s3[1]=='O' && s3[2]=='O') || (s1[0]=='O' && s2[0]=='O' && s3[0]=='O')
        || (s1[1]=='O' && s2[1]=='O' && s3[1]=='O') || (s1[2]=='O' && s2[2]=='O' && s3[2]=='O') || (s1[0]=='O' && s2[1]=='O' && s3[2]=='O') || (s1[2]=='O' && s2[1]=='O' && s3[0]=='O'))
        {
            oflag=1;
        }
        
        // if(cx+co==9 && xflag==0 && oflag==0)
        // {
        //     draw=1;
        // }
        
        // // if(xflag==1 && oflag==1)
        // // {
        // //     cout<<"3"<<endl;
        // // }
        // if((cx<co && cx>(co+1)) || (xflag==1 && cx!=(co+1)) || (xflag==1 && oflag==1) || (oflag==1 && co!=cx))
        // {
        //     cout<<"3"<<endl;
        // }
        // // else if(blank>1 || cx>co) // || xflag==0 || oflag==0)
        // else if(draw==1 || (xflag==1 && cx>co))
        // {
        //     cout<<"1"<<endl;
        // }
        // else{
        //     cout<<"2"<<endl;
        // }
        
        if((xflag==1 && oflag==1) || ((cx-co)<0) || (cx-co)>1) cout<<"3"<<endl;
        else if (cx==0 && co==0 && blank==9) cout<<"2"<<endl;
        else if (xflag==1 && oflag==0 && cx>co) cout<<"1"<<endl;
        else if (xflag==0 && oflag==1 && cx==co) cout<<"1"<<endl;
        else if (xflag==0 && oflag==0 && blank==0) cout<<"1"<<endl;
        else if (xflag==0 && oflag==0 && blank>0) cout<<"2"<<endl;
        else cout<<"3"<<endl;
        
	}
	return 0;
}

// test cases

// 1
// OOX
// OXO
// XXX

// 2
// XXO
// OXO
// XO-

// 1
// XXX
// OXO
// OOX

// 2
// XOO
// OX_
// XO_

test cases
7
XOX
XXO
O_O
XXX
OOO
___
XOX
OX_
XO_
OOX
OXO
XXX
XXO
OXO
XO-
XXX
OXO
OOX
XOO
OX_
XO_

output
2
3
1
1
2
1
3
