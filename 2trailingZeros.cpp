class Solution {
public:
    /*
     * @param n: A long integer
     * @return: An integer, denote the number of trailing zeros in n!
     */
    long long trailingZeros(long long n) {
        // write your code here, try to do it without arithmetic operators.
        long long num = 0;
        long long tmp = n / 5;
        while(tmp){
            num += tmp;
            tmp /= 5;
        }
        return num;
    }
};