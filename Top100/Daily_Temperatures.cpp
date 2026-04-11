class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans;

        for(int i = 0; i < temperatures.size(); i++) {
            int count = 0;
            int j = i + 1;

            while(j < temperatures.size() && temperatures[j] <= temperatures[i]) {
                count++;
                j++;
            }

            if(j < temperatures.size())
                ans.push_back(count + 1);
            else
                ans.push_back(0);
        }

        return ans;
    }
};