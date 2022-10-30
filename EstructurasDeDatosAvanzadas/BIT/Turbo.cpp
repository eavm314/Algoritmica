#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)

using namespace std;

int BIT[100010];
int posiciones[100010];
int n;

void update(int pos, int val)
{
    for (; pos <= n; pos += pos & -pos)
    {
        BIT[pos] += val;
    }
}

int query(int pos)
{
    int result = 0;
    for (; pos > 0; pos -= pos & -pos)
    {
        // printf("bitpos: %d\n", pos);
        result += BIT[pos];
    }
    // printf("todo bien?\n");
    return result;
}

int main()
{
    input;
    scanf("%d", &n);
    memset(BIT, 0, sizeof(BIT));
    for (int i = 1; i <= n; i++)
        update(i, 1);

    int a;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        posiciones[a] = i;
    }
    int i = 1, j = n;
    for (int k = 0; k < n; k++)
    {
        if (k % 2 == 0)
        {
            printf("%d\n", query(posiciones[i]) - 1);
            update(posiciones[i], -1);
            i++;
        }
        else
        {
            printf("%d\n", n - k - query(posiciones[j]));
            update(posiciones[j], -1);
            j--;
        }
    }
    return 0;
}