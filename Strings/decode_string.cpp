Decode Variations
A letter can be encoded to a number in the following way:

'A' -> '1', 'B' -> '2', 'C' -> '3', ..., 'Z' -> '26'
A message is a string of uppercase letters, and it is encoded first using this scheme. For example, 'AZB' -> '1262'

Given a string of digits S from 0-9 representing an encoded message, return the number of ways to decode it.

Examples:

input:  S = '1262'
output: 3
explanation: There are 3 messages that encode to '1262': 'AZB', 'ABFB', and 'LFB'.
Constraints:

[time limit] 5000ms

[input] string S

1 ≤ S.length ≤ 12
[output] integer




#import <iostream>
#import <string>

using namespace std;

int count(string seq, int n)
{
    // base case
    if (n == 0 || n == 1) {
        return 1;
    }
 
    int sum = 0;
 
    // consider single-digit numbers (1, 2, … 8, 9)
    if (seq[n - 1] >= '1' && seq[n - 1] <= '9') {
        sum = count(seq, n - 1);
    }
 
    // consider 2-digit numbers (10, 11, … 19, 20, … 25, 26)
    if (seq[n - 2] == '1' || (seq[n - 2] == '2' && seq[n - 1] <= '6')) {
        sum += count(seq, n - 2);
    }
 
    return sum;
}

int decodeVariations(const string& S)
{
  return count(S, S.length());
}

int main() 
{
	return 0;
}
