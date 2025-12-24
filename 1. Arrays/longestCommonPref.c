/*
Time complexity : O(n*m)
Space complexity: O(1)

Faced difficulties: I didn't know how cut the string when I find a different letter. 
Solution: Just give  the current different letter a '\0' 

*/
char *longestCommonPrefix(char **strs, int strsSize)
{
	for(int c =0;; ++c)// fix a character c
	{
	 if(strs[0][c] == '\0')// if all the first string's character are the same than the biginning of the others 

        return strs[0];// the longest common prefix is the first string . 			
		for(int s=1; s<strsSize; ++s)
		{	
			if(strs[s][c] != strs[0][c]) // compare all strings character to the first one
			{
				strs[0][c] = '\0'; // replace the current character with '\0'
				return strs[0];
			}
		
	}
}
}
