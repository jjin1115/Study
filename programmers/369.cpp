int solution(int num) {
    int answer = 0;
    for(int i = 0; i<=num; i++) {
        string temp = to_string(i);
        for(int j = 0; j< temp.length(); j++) {
            if(temp[j] == '3' || temp[j] == '6' || temp[j] ==['9']) {
                answer++;
                break;
            }
        }
    }
}