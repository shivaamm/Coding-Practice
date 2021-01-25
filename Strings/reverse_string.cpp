string reverseWord(string str){
   //1st way 
  reverse(str.begin(), str.end());
  
  //2nd way
    //   for (int i=str.length()-1; i>=0; i--) 
    //       cout << str[i];  

  // 3rd way
    // Swap character starting from two 
    // corners 
    // for (int i = 0; i < n / 2; i++) 
    //     swap(str[i], str[n - i - 1]); 
    
  return str;
    
}
