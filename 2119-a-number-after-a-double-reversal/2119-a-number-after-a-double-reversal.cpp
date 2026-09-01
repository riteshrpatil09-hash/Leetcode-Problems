class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev1 = 0;
        int rev2 = 0;
        bool found = false;
        int ori = num;

        while(num!=0){
            int digit = num%10;
            num /= 10;
            rev1 = rev1*10+digit;
        }
        while(rev1!=0){
            int digit1 = rev1%10;
            rev1 /= 10;
            rev2 = rev2*10+digit1;
        }
        
        if(ori==rev2){
            found = true;
        }
        return found;
    }
};