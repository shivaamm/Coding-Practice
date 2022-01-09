#define N 0
#define W 1
#define S 2
#define E 3

class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x=0, y=0, i=0;
        for(auto ins : instructions){
            if(ins == 'G'){
                switch(i){
                    case 0 :  //N
                        y++;
                        break;
                    case 1 :  //W
                        x--;
                        break;
                    case 2 :  //S
                        y--;
                        break;
                    case 3 :  //E
                        x++;
                        break;
                }
            }else if(ins == 'L') i = (i+1)%4; //%4 is done so that i remains in range [0, 3]
            
            else i = (i+3)%4;   // i+3 is for "R" direction
        }
        return x==0 && y==0 || i != 0;
    }
};
