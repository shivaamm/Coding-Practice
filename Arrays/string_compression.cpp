class Solution {
public:
    int compress(vector<char>& chars) 
    {
        // Using space as the ending character 
        // This is because chars[i] != ' ', as per the question
        // Helps to get the last charcter and its frequency, 
        // Without check whether the last index has been reached or not
        chars.push_back(' ');
        // Setting the initial frequency as 1
        // Every character in the vector will occur at least once
        // Using ans variable as the pointer
        int freq = 1, ans = 0;
        for(int i = 1; i < chars.size();i++)
        {
            // If the ith char is same as the (i-1)th char, 
            // Increase the frequency
            if(chars[i] == chars[i-1]) 
              freq++;
            else
            {
                // Set the (i-1)th char at the index pointed by ans variable
                // And then increase the ans variable by 1
                chars[ans++] = chars[i-1];
                // If frequency is 1, no need to modify the characters
                // Else modification is needed
                if(freq > 1)
                {
                    // Convert the frequency to String and store in num
                    // And then modify all the character int range (ans to [ans + size_of_num - 1])
                    string num = to_string(freq);
                    for(char c : num)
                    chars[ans++] = c;
                    // The ans variable now points to the first index that has not been modified
                    // Or the end point that has to be returned
                }
                freq = 1;
                // Setting the frequency back to 1, Atleast one occurance!
            }
        }
        return ans;
    }
};



**************************************************************************************************



class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.empty()) return 0;
        char curr = chars[0];
        int count = 1;
        string s;
        for (int i = 1; i <= chars.size(); i++) {
            if (i < chars.size() && chars[i] == curr) {
                count++;
            } else {
                s.push_back(curr);
                if (count > 1) {
                    string str = to_string(count);
                    for (char c : str) {
                        s.push_back(c);
                    }
                }
                curr = i < chars.size() ? chars[i] : 0;
                count = 1;
            }
        }
        for (int i = 0; i < s.size(); i++) {
            chars[i] = s[i];
        }
        return s.size();
    }
};
