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
        cout << "s1 :" << s1 << endl;
        cout << "s2 :" << s2 << endl;
        vector<int> arr1(26*2,0);
        vector<int> arr2(26*2,0);
        for(char c: s1){
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                arr1[c - 'a']++;
            }
            if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
                arr1[c - 'A' + 26]++;
            }
        }
        for(auto it:arr1){
            cout << it << " ";
        }
        cout << endl;
        

        cout << endl;
        for(char c : s2){
            cout << "c :" << c << "-";
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                arr1[c - 'a']--;
            }
            if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
                arr1[c - 'A' + 26]--;
            }
        }
        cout << endl;
        for(auto it:arr2){
            cout << it << " ";
        }
        int k =0;
        while(k<26*2){
            if(arr1[k]!=0){
                return false;
            }
            k++;
        }
        return true;
    }
};
