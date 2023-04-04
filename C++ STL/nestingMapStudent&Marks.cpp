#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<pair<string, string>, vector<int>> m;

    int N;

    cin >> N;

    while (N--)
    {
        string fn, ln;
        int total_subjects;
        cin >> fn >> ln >> total_subjects;
        for (int i = 0; i < total_subjects; i++)
        {
            int subject_marks;
            cin >> subject_marks;
            m[{fn, ln}].push_back(subject_marks);
        }
    }

    for (auto &pr : m)
    {
        auto &full_name = pr.first;
        auto &marks_list = pr.second;
        cout << full_name.first << " " << full_name.second << endl;
        for (auto &marks : marks_list)
        {

            cout << marks << endl;
        }
    }
}