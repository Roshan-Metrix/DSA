class Solution {
 public:
  string fractionAddition(string expression) {
    istringstream iss(expression);
    char _;
    int a;
    int b;
    int A = 0;
    int B = 1;
    while (iss >> a >> _ >> b) {
      A = A * b + a * B;
      B *= b;
      const int g = abs(__gcd(A, B));
      A /= g;
      B /= g;
    }

    return to_string(A) + "/" + to_string(B);
  }
};