class  Solution {
public:	
	bool isSubsequence(string s, string t)
	{
		int j = 0;
		bool successfull = false;
	
		for (int i = 0; i < t.length; i++)
		{
		    if (t[i] == s[j])
		    {
		        j++;
		    }
		}
	
		if (j == s.length()) successfull = true;
	
		return successfull;
	}
};
