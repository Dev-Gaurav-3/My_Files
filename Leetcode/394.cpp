class Solution
{
public:
    string decodeString(string s)
    {
        stack<string> st1; // for substrings
        stack<int> st2;    // for numbers
        string curr = "";
        int num = 0;

        for (char ch : s)
        {
            if (isdigit(ch))
            {
                // Build multi-digit numbers
                num = num * 10 + (ch - '0');
            }
            else if (ch == '[')
            {
                // Push the number and current string context
                st2.push(num);
                st1.push(curr);
                num = 0;
                curr = "";
            }
            else if (ch == ']')
            {
                // Pop and repeat
                string temp = curr;
                curr = st1.top();
                st1.pop();

                int repeat = st2.top();
                st2.pop();

                while (repeat--)
                {
                    curr += temp;
                }
            }
            else
            {
                // Add letters to current string
                curr += ch;
            }
        }
        return curr;
    }
};
