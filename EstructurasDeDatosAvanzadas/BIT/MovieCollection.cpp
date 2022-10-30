#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)

using namespace std;

int BIT[200010];
int m, r;

void update(int pos, int val)
{
    for (; pos <= m + r; pos += pos & -pos)
    {
        BIT[pos] += val;
    }
}

void init()
{
    memset(BIT, 0, sizeof(BIT));
    for (int i = 1; i <= m; i++)
        update(i, 1);
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
    int t, a;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &m, &r);
        int pos[m + 1];
        pos[0]=0;
        for (int j = 1; j <= m; j++)
            pos[j] = m - j + 1;

        int top=m+1;
        init();
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &a);
            // printf("a: %d\n",a);
            // printf("pos[a]: %d\n",pos[a]);
            int cantidad = m - query(pos[a]);
            printf("%d ", cantidad);

            // for (int k = 1; k <= m; k++)
            // {
            //     printf("%d ",pos[k]);
            // }
            // printf("\n");

            update(pos[a], -1);
            pos[a] = top;
            update(top, 1);
            top++;
        }

        printf("\n");
    }
    return 0;
}