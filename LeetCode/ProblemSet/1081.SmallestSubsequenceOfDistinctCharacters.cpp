 vector<int> freq(26, 0);
        vector<bool> used(26, false);
        string st;

        for (char c : s){
            freq[c - 'a']++;
        }

        for (char c : s) {
            freq[c - 'a']--;

            if (used[c - 'a'])
                continue;

            while (!st.empty() &&
                   st.back() > c &&
                   freq[st.back() - 'a'] > 0) {

                used[st.back() - 'a'] = false;
                st.pop_back();
            }

            st.push_back(c);
            used[c - 'a'] = true;
        }

        return st;