class Solution {
public:
    int compress(vector<char>& chars) {
        char t = chars[0];
        int count = 0, totalcount = 0, posi = 0;
        for (char read : chars) {
            if (t == read) {
                count++;
            } else {
                chars[posi] = t;
                if (chars.size() > posi + 1 && count > 1) {
                    if (count <= 9) {
                        chars[posi + 1] = count + '0';
                        totalcount += 2;
                        posi += 2;
                    } else {
                        string c = to_string(count);
                        for (int i = 1; i <= c.size(); i++) {
                            chars[posi + i] = c[i - 1];
                        }
                        totalcount += c.size() + 1;
                        posi += c.size() + 1;
                    }
                } else {
                    posi += 1;
                    totalcount += 1;
                }
                count = 1;
            }
            t = read;
        }
        chars[posi] = t;

        if (count > 1) {
            if (count <= 9) {
                chars[posi + 1] = count + '0';
                totalcount += 2;
                posi += 2;
            } else {
                string c = to_string(count);
                for (int i = 1; i <= c.size(); i++) {
                    chars[posi + i] = c[i - 1];
                }
                totalcount += c.size() + 1;
                posi += c.size() + 1;
            }
        } else {
            totalcount += 1;
        }
        return totalcount;
    }
};