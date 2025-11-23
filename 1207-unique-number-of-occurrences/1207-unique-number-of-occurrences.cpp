class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map <int,int> count;
       for(int i = 0 ;i < arr.size();i++){
        count[arr[i]]++;
       } 
       unordered_set<int> countSet;
        
        // Iterating using the method we discussed earlier
        for (const auto& pair : count) {
            int counti = pair.second; // We only care about the count (value)
            countSet.insert(counti);
        }

        // Step 3: Compare sizes
        // If freqMap has 3 items but countSet only has 2, it means a count was repeated.
        return count.size() == countSet.size();
    }
};