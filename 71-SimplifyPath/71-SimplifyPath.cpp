// Last updated: 7/25/2026, 7:29:01 PM
class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        for (int i = 0; i < path.size(); i++) {
            if (path[i] == '.') {
                string s = ".";
                i++;
                while (i < path.size() && path[i] == '.') {
                    s.push_back('.');
                    i++;
                }
                if (i < path.size() && path[i] != '/') {
                    s.push_back(path[i]);
                    i++;
                    while (i < path.size() && path[i] != '/') {
                        s.push_back(path[i]);
                        i++;
                    }
                    st.push_back(s);
                }else {
                    if (s.size() == 1) continue;

                    if(s.size() == 2) {
                        if (!st.empty()) st.pop_back();
                    }else {
                        st.push_back(s);
                    }
                }
            }else if (path[i] != '/') {
                string s;
                s.push_back(path[i]);
                i++;
                while (i < path.size() && path[i] != '/') {
                    s.push_back(path[i]);
                    i++;
                }
                st.push_back(s);
            }
        }

        string res;

        for (const auto& dir : st) {
            res += "/" + dir;
        }

        if (res.size() == 0) return "/";

        return res;
    }
};