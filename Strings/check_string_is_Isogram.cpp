bool isIsogram(string str)
{
    int len = str.length(); 
  
    for (int i = 0; i < len; i++) 
        str[i] = tolower(str[i]); 
  
    sort(str.begin(), str.end()); 
  
    for (int i = 0; i < len; i++) { 
        if (str[i] == str[i + 1]) 
            return 0; 
    } 
    return 1; 
}
