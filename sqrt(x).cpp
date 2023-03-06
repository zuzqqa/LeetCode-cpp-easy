class Solution {
public:
    int mySqrt(int n) {
        double x = n ;
        float l = 0.00001;

        double root;
        int count = 0;

        while(1) {
            count++;
            
            root = 0.5 * (x + (n / x));

            if (abs(root - x) < l) break;

            x = root;
        }

        return root;
    }
};
