#include <bits/stdc++.h>
#include <stack> 

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
stack<char> p;
for(int i=0;i<s.size();i++){
    if(p.size()>0&&p.top()=='('&&s[i]==')'){
        p.pop();
    }
else if(p.size()>0&&p.top()=='{'&&s[i]=='}'){

    p.pop();
}
else if(p.size()>0&&p.top()=='['&&s[i]==']'){

    p.pop();
}
else{

    p.push(s[i]);
}

    }
if(p.size()==0&&s.size()!=0){

return "YES";

}
else{

    return "NO";
}



}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
