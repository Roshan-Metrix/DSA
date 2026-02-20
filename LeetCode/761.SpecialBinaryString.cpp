  vector<string> parts;
        int count = 0;
        int start = 0;

        // Split into top-level special substrings
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1')
                count++;
            else
                count--;

            // When count becomes 0, we found a special substring
            if (count == 0) {
                // Recursively process inside part
                string inner = s.substr(start + 1, i - start - 1);
                parts.push_back("1" + makeLargestSpecial(inner) + "0");
                start = i + 1;
            }
        }

        // Sort in descending lexicographical order
        sort(parts.begin(), parts.end(), greater<string>());

        // Concatenate all parts
        string result;
        for (string &p : parts)
            result += p;

        return result;