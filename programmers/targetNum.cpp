//
// Created by HJ on 2020-12-10.
// https://programmers.co.kr/learn/courses/30/lessons/43165/solution_groups?language=cpp
//

#include <string>
#include <vector>

using namespace std;

int answer = 0;

void dfs(vector<int> numbers, int target, int sum, int idx)
{
    if (idx == numbers.size())
    {
        if (target == sum)
        {
            answer++;
        }
        return;
    }
    dfs(numbers, target, sum + numbers[idx], idx+1);
    dfs(numbers, target, sum - numbers[idx], idx+1);
}

int solution(vector<int> numbers, int target) {
    dfs(numbers, target, 0, 0);
    return answer;
}