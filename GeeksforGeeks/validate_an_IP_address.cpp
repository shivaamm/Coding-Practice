nt isValid(string s) {
    // my_str.erase(remove(my_str.begin(), my_str.end(), '.'), my_str.end()); //remove '.' from string
    
    int count = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '.')
            count++;
    }
    if(count!= 3)
    {
        return false;
    }
	
    stringstream ss(s);
    string subs;
        
    // 	long x = 0;
    // 	geek >> x;
    while(getline(ss, subs, '.'))
    {
        if(subs.size() > 3 || subs.size() == 0)
        {
            return false;
        }
        
        if(subs.size() > 1 and subs[0] == '0')
        {
            return false;
        }
        
        int num = 0;
        for(int i = 0; i < subs.size(); i++)
        {
            if(subs[i] >= '0' and subs[i] <= '9')
            {
                num = num * 10 + (subs[i] - '0');
            }
            else
            {
                return false;
            }
        }
        if(num >= 0 and num <= 255)
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}
