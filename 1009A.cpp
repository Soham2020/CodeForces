#include <bits/stdc++.h>
using namespace std;
queue<int> q_game, q_money;
int main()
{
    int n, m, temp;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> temp, q_game.push(temp);
    for (int i = 1; i <= m; i++) cin >> temp, q_money.push(temp);
    int sum = 0;
    while (!q_money.empty() && !q_game.empty())
        if(q_money.front() >= q_game.front()) q_money.pop(), q_game.pop(), sum++;
        else q_game.pop();
    cout << sum;
}
