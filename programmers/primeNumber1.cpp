//
// Created by HJ on 2020-11-16.
// https://programmers.co.kr/learn/courses/30/lessons/12921
//
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    // int count = 0;
    // for(int i = 2; i <= n; i++)  {
    //     for(int j = 1; j <=i; j++) {
    //         if(i%j == 0) {
    //             count++;
    //         }
    //     }
    //     if( count == 2) {
    //         answer++;
    //     }
    //     count = 0;
    // }
    // return answer;
    bool* PrimeArray = new bool[n + 1];

    /*  배열초기화: 처음엔 모두 소수로 보고 true값을 줌	*/
    for (int i = 2; i <= n; i++)
        PrimeArray[i] = true;

    /*	에라토스테네스의 체에 맞게 소수를 구함
        만일, PrimeArray[i]가 true이면 i 이후의 i 배수는 약수로 i를
        가지고 있는 것이 되므로 i 이후의 i 배수에 대해 false값을 준다.
        PrimeArray[i]가 false이면 i는 이미 소수가 아니므로 i의 배수 역시
        소수가 아니게 된다. 그러므로 검사할 필요도 없다.
또한 i*k (k < i) 까지는 이미 검사되었으므로 j시작 값은 i*2 에서 i*i로 개선할 수 있다.
    */
    for (int i = 2; i * i <= n; i++)
    {
        if (PrimeArray[i])
            for (int j = i * i; j <= n; j += i)
                PrimeArray[j] = false;
    }
    for(int i = 2; i<=n; i++) {
        if(PrimeArray[i]) {
            answer++;
        }
    }
    return answer;
}