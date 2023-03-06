class Solution { //Newton's method
public:
    int mySqrt(int n) {
        double x = n ;
        float l = 0.001;

        double root;
        int count = 0;

        if( n == 0 ) return 0;
        
        while(1) {
            count++;

            root = 0.5 * (x + (n / x));

            if (abs(root - x) < l) break;

            x = root;
        }

        return floor(root);
    }
};
