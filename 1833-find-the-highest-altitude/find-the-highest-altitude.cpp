class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        float result =0;
      int altitude=0;
        for(int i =0;i<gain.size();i++){
            altitude += gain[i];  
            if(altitude >result){
                result =altitude;
            }
        }
        return result;
    }
};