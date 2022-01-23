class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        // vector<int>v = {12,23,34,45,56,67,78,89,
        //                  123,234,345,456,567,678,789,
        //                  1234,2345,3456,4567,5678,6789,
        //                  12345,23456,34567,45678,56789,
        //                  123456,234567,345678,456789,
        //                  1234567,2345678,3456789,
        //                  12345678,23456789,
        //                  123456789};
        // vector<int>ans;
        // for(int i = 0; i<v.size(); i++){
        //     if(v[i] < low)continue;
        //     else if(v[i] > high)break;
        //     else ans.push_back(v[i]);
        // }
        // return ans;
        
        
        
        // vector<int> ans;
        // for(int u=1;u<=8;u++){
        //     int num = u;
        //     for(int j=u+1;j<=9;j++){
        //         num = num*10+j;
        //         if(num>=low && num <=high) ans.push_back(num);
        //     }
        // }
        // sort(ans.begin(), ans.end());
        // return ans;
        
        
        string digit = "123456789";
          vector<int> result;
          int lenMin = to_string(low).length();
          int lenMax = to_string(high).length();
          for (int i = lenMin; i <= lenMax; i++)
          {
               for (int j = 0; j < 10 - i; j++)
               {
                    int num = stoi(digit.substr(j, i));
                    if (num >= low and num <= high)
                    {
                         result.push_back(num);
                    }
               }
          }
          return result;
    }
};
