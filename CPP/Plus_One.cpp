class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n= digits.size();
        if (digits[n-1]==9){
            if(digits[0]==9){
                digits.push_back(0);
                n++;
                for (int i=1;i<n-1;i++){
                    digits[i]=0;
                }
                digits[0]=1;
            }
            else{
                digits[n-1]=0;
                digits[0]++;
                for (int i=;i<n-1;i++){
                    if(digits[i]==9){
                        digits[i]==0;
                    }
                    else{
                        digits[i]=digits[i]+1;
                    }
                }
            }
        }
        else{
            digits[n-1]++;
        }
        return digits;
    }
};