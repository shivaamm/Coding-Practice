vector<int> greater_height(vector<int>v)
{
    vector<int> v1;
    set<int> s;
    for(int i =0;i<v.size();i++){
        auto it = s.upper_bound(v.at(i));
        if(it == s.end()){
            v1.push_back(-1);
        }
        else{
            v1.push_back(*it);
        }
        s.insert(v.at(i));
    }
    return v1;
    
    // incomplete code
    
    // vector<int>arr;
    // arr.push_back(-1);
    // int j=0;
    // int max=0;
    // for(int i=1;i<v.size();i++)
    // {
    //     if(max<v[i])
    //         max=v[i];
    //     if(v[j]>v[i])
    //     {
    //         arr.push_back(max);
            
    //     }
    //     else
    //     {
    //         arr.push_back(-1);
    //     }
    //     j++;
    // }
    // return arr;
}

*******************************************************************

vector<int> greater_height__(vector<int> v)
{
    int size = v.size();
    vector<int> fstGH(size, -1);
    set<int> heights;
    heights.insert(v[0]);
    for(int i = 1; i < size; i++) {
        for(const auto &itr : heights) {
            if(itr > v[i]) {
                //cout << itr << endl;
                fstGH[i] = itr;
                break;
            }
        }
        //cout << "__" << endl;
        heights.insert(v[i]);
    }
    
    return fstGH;
}
