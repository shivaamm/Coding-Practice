void reverseIterator(vector<int>::reverse_iterator it1, vector<int>::reverse_iterator it2)
{
    for (auto it = it1; it != it2; it++)
	{
		cout << *it << " ";
	}
    cout<<endl;
    
}
