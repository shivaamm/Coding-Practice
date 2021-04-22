class Solution{
public:
    int minStep(int h, int u, int d){
        int diff = u-d;
	    int res = (h-u + diff-1) / diff + 1;
	    if ((res-1)*diff + u == h)
	        res++;
	   return res;
    }
};
