class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
         int cnt=0;
		for(int i=1;i<nums.size();i++){
			if(nums[i]<nums[i-1]){
				cnt++;
				if(!(i-2<0 || nums[i-2]<=nums[i])){
					nums[i]=nums[i-1];
				}
				if(cnt==2) break;
			}
		}
		return cnt<2;
        
        ***********************************************************************************************
        // int count = 0;
        // //We Consider a Series of 3 Elements;
        // for(int i = 1 ; i<nums.size(); i++){
        //     if(nums[i]<nums[i-1]){ //if 3 rd is less than 2 nd
        //        if(i==1||nums[i-2]<=nums[i]){//Check if 3 is greater than or equal to 1
        //            nums[i-1] = nums[i];//Equal 2 to 3 rd
        //            count++;
        //        }
        //     else{
        //         if(nums[i-2]>nums[i]){//Check if 3 is less than 1
        //             nums[i] = nums[i-1];//Equal 3 to 2 nd
        //             count++;
        //         }   
        //        }
        //     }
        //     cout<<count;
        //     if(count>1)//If there are more than 2 changes done ..return false
        //         return false;
        // }
        // return true;
        
        // **********************************************************************************************
        
//      not a proper solution   
        
//         int count=0;
//         for(int i=0;i<nums.size()-1;i++)
//         {
//             if(nums[i]>nums[i+1])
//             {
//                 count++;
                
//                 if(i>0 && nums[i-1]>nums[i+1])
//                 {
//                     count++;
//                 }
//             }
//         }
//         cout<<count<<endl;
//         if(count<=1)
//             return true;
//         else
//             return false;
        
    }
};
