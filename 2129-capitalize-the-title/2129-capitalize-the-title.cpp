class Solution {
public:
    string capitalizeTitle(string title) {
        
        int n = title.size();
        
        for(int i = 0; i < n; ){
            
            int j = i;
            
            while(j < n && title[j] != ' ')
                j++;
            
            int len = j - i;
            
            for(int k = i; k < j; k++)
                title[k] = tolower(title[k]);
            
            if(len > 2)
                title[i] = toupper(title[i]);
            
            i = j + 1;
        }
        
        return title;
    }
};