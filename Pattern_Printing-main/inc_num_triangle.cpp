#include <iostream>

int main() {
    int num=1;
    int n=7;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<i;j++)
        {
            std::cout<<num;
            num=num+1;
            
        }
        std::cout<<std::endl;
    }
     

    return 0;
}
