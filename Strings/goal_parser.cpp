https://leetcode.com/problems/goal-parser-interpretation/

class Solution {
public:
    string interpret(string command) {
        //  string s = "";
        // for (int i = 0; i < command.length(); i++) {
        //     if (command[i] == '(') {
        //         if (command[i + 1] == ')') {
        //             i++;
        //             s += "o";
        //         }
        //         else {
        //             i += 3;
        //             s += "al";
        //         }
        //     }
        //     else
        //         s += command[i];
        // }
        // return s;
        
        map<string,string,greater<string>>mp;
        mp["G"] = "G";
        mp["()"] = "o";
        mp["(al)"] = "al";

        int temp = 0;
        for(auto x:mp){
           temp = command.find(x.first);
           while(temp>=0 && temp<command.size())
           {
              command.replace(temp,x.first.size(),x.second);
              temp = command.find(x.first,temp+1);
           }
        }

        return command;
    }
};
