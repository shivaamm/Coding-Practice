void iter(vector<int>::iterator it1,vector<int>::iterator it2)
{
    //Your code here. Use iterator to print all the elements
    vector<int>::iterator it;
    for (it = it1; it != it2; it++)
	{
		cout << *it << " ";
	}
    cout<<endl;
}
