#include <stdio.h>

int main()
{
    int x;
    unsigned p;

    scanf("%d %d", &x, &p); 
    
int power(int x, unsigned p) {
    int answer = 1;
    for (int i = 0; i <= p; ++i) {
        answer *= x;
    }
    /* считаем answer */
    return answer;
}
}
