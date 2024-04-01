#include <iostream>
#include <vector>

using namespace std;

typedef struct Node {
    int data;
    struct Node *next;
    struct Node *ant;
} Node;


Node* createNode(int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->ant = NULL;
    return newNode;
}

int main() {
    Node *primeiro = createNode(1);
    Node *atual = primeiro;
    primeiro->data=0;

    for (int i = 1; i <= 15; i++) {
        atual->next = createNode(i);
        atual->next->ant = atual;
        atual = atual->next;
        atual->data = i;
    }

    //ultimooo aponta pro primeiro
    atual->next = primeiro;
    primeiro->ant = atual;

    int h,p,f,d;
    cin >> h >> p >> f >> d;


    Node *temp = primeiro;
    Node *tempfinal;
    
    do {
        if (temp->data == f) {
            tempfinal = temp;
            break;
        }
        temp = temp->next;
    } while (temp != primeiro);

    if (d == 1) {
        do {
            if (temp->data == h) {
                cout << 'S';
                return 0;
            }
            else if (temp->data == p) {
                cout << 'N';
                return 0;
            }
            
            temp = temp->next;

        } while (temp != tempfinal);
    }
    else {
        do {
            if (temp->data == h) {
                cout << 'S';
                return 0;
            }
            else if (temp->data == p) {
                cout << 'N';
                return 0;
            }
            
            temp = temp->ant;

        } while (temp != tempfinal);
    }

    //#tropa da lista duplamente encadeada gambiarrada!

    return 0;
}
