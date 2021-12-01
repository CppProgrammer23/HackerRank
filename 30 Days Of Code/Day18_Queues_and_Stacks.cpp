#inlcude <stack>
#include <queue>

//naturally, I don't use using namespace std; but since HackerRank uses it so it's okay for me
class Solution {
    //Write your code here
    stack<char> s;
    queue<char> q;
public:
    void pushCharacter(const char& c)
    {
        s.push(c);
    }
    void enqueueCharacter(const char& c)
    {
        q.push(c);
    }
    char dequeueCharacter()
    {
        char c = q.front();
        q.pop();
        return c;
    }
    char popCharacter()
    {
        char c = s.top();
        s.pop();
        return c;
    } 
};
