#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)

using namespace std;

bool repetido=0;

struct node
{
    // char currentCharacter;
    bool isWord;
    //  int priority = 0;
    struct node *children[10]; // [null,null,null,......,null]
    node()
    {
        isWord = 0;
        for (int i = 0; i < 10; i++)
            children[i] = NULL;
    }
} * trie;

// Inicializar

void init()
{
    trie = new node(); // Instanciar el objeto trie
}

void insertWord(string phone)
{ // alba
    node *currentNode = trie;
    for (int i = 0; i < phone.length(); i++)
    {                               // alba
        int digit = phone[i] - '0'; // i = 0 'a'-'a' = 0
        // printf("digit: %d\n", digit);
        // printf("funca: %c\n",currentNode);
        // cout << (currentNode->children[7] == NULL) << endl;
        if (currentNode->children[digit] == NULL)
        {
            currentNode->children[digit] = new node();
            // currentNode->isWord = false;
        }
        currentNode = currentNode->children[digit];
        // currentNode->currentCharacter = phone[i];
        // printf("ya existe: %d\n", currentNode->isWord);
        if (currentNode->isWord){
            repetido= 1;
            return;
        }
    }
    currentNode->isWord = 1;
}

int main()
{
    input;
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        char arr[10];
        // string phone;
        priority_queue<string, vector<string>, greater<string>> cola;
        repetido=0;
        for (int j = 0; j < n; j++)
        {
            scanf("%s", &arr);
            cola.push(string(arr));
        }

        init();
        while (!cola.empty())
        {
            // cout << cola.top() << " ";
            insertWord(cola.top());
            if (repetido)
                break;
            // cout << "insertado: " << cola.top() << endl;
            cola.pop();
        }
        // cout << endl;
        // printf("repetido: %d\n",repetido);
        printf(repetido? "NO\n":"YES\n");
    }

    return 0;
}