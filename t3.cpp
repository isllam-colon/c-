#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // Problem A
/*     int n,x;
    cin>> n;
    vector<int> math , prog ,eu;
    for(int i=1;i<=n;i++)
    {
        cin>> x;
        if(x==1) prog.push_back(i);
        else if(x==2) math.push_back(i);
        else if(x==3) eu.push_back(i);
    }
    int ans= min(math.size(),min(prog.size() , eu.size()));
    cout<< ans << endl;
    for (int i=0;i<ans;i++)
    {
        cout<< math[i] <<" " << prog[i] <<" " << eu[i];
    } */



    // problem H

/*     long long n,f1=0,s1=0;
    string s;
    cin>> n;
        for(int i=0;i<n;i++)
        {
            cin>> s;
            if(s[i]=='(')
            {
                f1++;
            }
            else if(s[i]==')')
            {
                if(f)
                {
                    s
                }

            }
        } */


    //problem J


    const int max_n0 = 100005;
    string database[max_n0];
    int count[max_n0] = {0};
    int n;
    cin >> n;
    cin.ignore(); 

    for (int i = 0; i < n; i++) {
        string name;
        getline(cin, name);

        int num = count[name];
        if (num == 0) 
        {
            count[name] = 1;
            database[i] = name;
            cout << "OK\n";
        } 
        else
        {
            string newName = name +  to_string(num);
            while (count[newName] != 0) {
                num++;
                newName = name +  to_string(num);
            }
            count[name] = num + 1;
            count[newName] = 1;
            database[i] = newName;
             cout << newName << "\n";
        }
    }

    return 0;
}
