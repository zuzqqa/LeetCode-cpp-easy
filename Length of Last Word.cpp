class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int sz = 0;

        for( i; s[i] == 32; i-- ) {}

        while( i >= 0 && s[i] != 32 ) {
            sz++;
            i--;
        }

        if( (s.length() - 1) == 0 ) sz = 1;

        return sz;
    }
};
