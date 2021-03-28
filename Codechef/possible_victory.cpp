#include<iostream>

int main(void) {
	int r,o,c;
	std::cin>>r>>o>>c;
	
	int rem=20-o;
	int score=rem*6*6;
	int curr=c+score;
	if(curr>r)
	    std::cout<<"YES";
    else
        std::cout<<"NO";
	return 0;
}

