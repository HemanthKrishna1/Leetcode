class Solution {
public:
    bool halvesAreAlike(string s) {
        string s1,s2 = "";
        int n = s.length();
        int i=0;
        int j=n-1;
        while(i<j){
            s1+=s[i];
            i++;
            s2+=s[j];
            j--;
        }    
        int n1 = 0;
        int n2 = 0;
        for(char c :s1){
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c =='I' ||c=='O' ||c=='U'){
                n1++;
            }
        }
        for(char c :s2){
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c =='I' ||c=='O' ||c=='U'){
                n2++;
            }
        }
        return n1==n2 ? true: false;
    }
};
