string isSubset(int a1[], int a2[], int n, int m) {
  
    // int freq[100000] = {0};
    
    // for(int i=0;i<n;i++) {
    //     freq[a1[i]]++;
    // }
    
    // for(int i=0;i<m;i++) {
    //     if(freq[a2[i]]  >0) {
    //         freq[a2[i]]--;
    //     }
    //     else {
    //         return "No";
    //     }
    // }
    // return "Yes";
  
    
    ********************************************************************************
      
    if(n<m)
        return "No";
    unordered_map<int,int> mp;
    // for(int i=0;i<n;i++){
    //     mp[a1[i]]=0;
    // }
    for(int i=0;i<n;i++){
        mp[a1[i]]++;
    }
    for(int i=0;i<m;i++){
        if(mp[a2[i]]==0)
        return "No";
    }
    return "Yes";
  
    
    ****************************************************************************
      
        // sort(a1,a1+n);
        //  sort(a2,a2+m);int i,j;
        //  for(i=0,j=0;i<n&&j<m;)
        //  {
        //      if(a1[i]==a2[j])
        //      {
        //          i++;
        //          j++;
        //      }
        //      else
        //      {
        //          i++;
        //      }
        //  }
        //  if(j==m)
        //  {
        //      return "Yes";
        //  }
        //  else
        //      return "No";
             
      
      ***********************************************************************************
             
             
    //     vector<int> v(f), sec(s);
	   // for(int i=0; i<f; i++)
	   // {
	   //     cin>>v[i];
	   // }
	   // for(int i=0; i<s; i++)
	   // {
	   //     cin>>sec[i];
	   // }
	   // for(int i=0; i<f; i++)
	   // {
	   //     auto itr = find(sec.begin(), sec.end(), v[i]);
	   //     if(itr!=sec.end())
	   //     {
	   //         sec.erase(itr, itr+1);
	            
	   //     }
	   // }
	   // if(sec.size()==0)
	   // {
	   //     cout<<"Yes"<<endl;
	   // }
	   // else
	   // {
	   //      cout<<"No"<<endl;

	   // }
	   
	   
	   
}
