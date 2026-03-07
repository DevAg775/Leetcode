class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>arr1=arr;
        sort(arr1.begin(),arr1.end());

        unordered_map<int,int> map;
        int rank = 1;

        for(int x : arr1){
            if(map.find(x) == map.end()){
                map[x] = rank++;
            }
        }

        for(int i=0;i<arr.size();i++){
            arr[i] = map[arr[i]];
        }

        return arr;
    }
};