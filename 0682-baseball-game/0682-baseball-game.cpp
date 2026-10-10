class Solution {
public:
    int calPoints(vector<string>& operations) {
        int top = -1;
        int st[1000];

        for(string i: operations) {
            if(i == "C") {
                top--;
            }
            else if (i == "D"){
                st[top+1] = 2 * st[top];
                top++;
            }
            else if (i == "+") {
                st[top+1] = st[top]+st[top-1];
                top++;
            }
            else{
                st[++top] = stoi(i);
            }
        }

        int sum=0;

        for(int i=0; i<=top; i++){
            sum += st[i];
        }
        return sum;
    }
};