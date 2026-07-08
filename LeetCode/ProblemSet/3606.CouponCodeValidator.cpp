class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<int> validIndices;
      
        unordered_set<string> validBusinessLines = {
            "electronics", 
            "grocery", 
            "pharmacy", 
            "restaurant"
        };

        for (int i = 0; i < code.size(); ++i) {
            const string& couponCode = code[i];
            const string& business = businessLine[i];
            bool isActiveCoupon = isActive[i];
          
            if (isActiveCoupon && 
                validBusinessLines.count(business) && 
                isValidCouponFormat(couponCode)) {
                validIndices.push_back(i);
            }
        }

        sort(validIndices.begin(), validIndices.end(), [&](int indexA, int indexB) {
            if (businessLine[indexA] != businessLine[indexB]) {
                return businessLine[indexA] < businessLine[indexB];
            }
           
            return code[indexA] < code[indexB];
        });

      
        vector<string> result;
        for (int index : validIndices) {
            result.push_back(code[index]);
        }
      
        return result;
    }

private:
    bool isValidCouponFormat(const string& couponCode) {
        if (couponCode.empty()) {
            return false;
        }
      
        for (char ch : couponCode) {
            if (!isalnum(ch) && ch != '_') {
                return false;
            }
        }
      
        return true;
    }
};