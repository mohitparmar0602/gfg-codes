class Solution {
  public:
    string decToBinary(int n) {
        // code here
        string result = "";
        while (n>0){
            result.push_back((n%2)+'0');
            n/=2;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};