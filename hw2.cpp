#include <iostream>
#include <stack>

bool check_bracket(std::string input) {
    std::stack <char> st;
    for (auto c : input) {
        switch (c) {
            case '(':
            case '[': {
                st.push(c);
                break;
            }
            case ')': {
                if (st.top() != '(') {
                    return false;
                } else { st.pop(); }
                break;
            }
            case ']': {
                if (st.top() != '[') {
                    return false;
                } else { st.pop(); }
                break;
            }
        }
    }
    return true;
}
int main() {
    char str1 [] = "()[[][()(()))";
    char str2 [] = "()[]()([(]";
    char str3 [] = "()[]()([[]])";
    bool res1 = check_bracket(str1);
    bool res2 = check_bracket(str2);
    bool res3 = check_bracket(str3);

    std::cout << str1 <<'\t'<<res1 << std::endl;
    std::cout << str2 <<'\t'<<res2 << std::endl;
    std::cout << str3 <<'\t'<<res3 << std::endl;
}