class Solution{
public:


    int count(string pat, string txt){
        int k = pat.size();
        int n = txt.size();
        map<char,int> mp;
        for(int i = 0; i < k; i++){
            mp[pat[i]]++;
        }
        int ans = 0;
        int i = 0, j = 0;
        int cnt = mp.size();
        
        while(j < n){
            // calculation part
            if(mp.find(txt[j]) != mp.end()) {
                mp[txt[j]]--;
                if(mp[txt[j]] == 0) cnt--;
            }
            if(j - i + 1 < k){
                j++;
            }
            else if(j - i + 1 == k){
                // finding the ans
                if(cnt == 0){
                    ans++;
                }
                if(mp.find(txt[i]) != mp.end()){
                    mp[txt[i]]++;
                    if(mp[txt[i]] == 1){
                        cnt++;
                    }
                }
                // slide the window
                i++;
                j++;
            }
            
        }
        return ans;
        
    }

	int search(string pat, string txt) {
	    // code here
	    return count(pat, txt);
	}

};