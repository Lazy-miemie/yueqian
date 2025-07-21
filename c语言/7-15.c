
#include <stdio.h>
#include <stdlib.h>

// 定义链表节点结构体
struct Node {
    int data;
    struct Node* next;
};
struct Node* findmid(struct Node* head)
{
    if(head == NULL)
        return NULL;

    struct Node* fast=head;
    struct Node* slow=head;
    while (fast !=NULL &&fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
};

 


int main() {
    // 创建5个节点
    struct Node* head = NULL;
    struct Node* two = NULL;
    struct Node* three = NULL;
    struct Node* four = NULL;
    struct Node* five = NULL;

    // 为节点分配内存
    head = (struct Node*)malloc(sizeof(struct Node));
    two = (struct Node*)malloc(sizeof(struct Node));
    three = (struct Node*)malloc(sizeof(struct Node));
    four = (struct Node*)malloc(sizeof(struct Node));
    five = (struct Node*)malloc(sizeof(struct Node));

    // 赋值并连接节点
    head->data = 1;
    head->next = two;

    two->data = 2;
    two->next = three;

    three->data = 3;
    three->next = four;

    four->data = 4;
    four->next = five;

    five->data = 5;
    five->next = NULL;  // 最后一个节点的next设为NULL

    // 打印链表
    printf("链表内容: \n");
    struct Node* current = head;  // 从头部开始遍历
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;  // 移动到下一个节点
    }
    printf("\n");
    struct Node* middle=findmid(head);
    printf("中间节点：%d",middle->data);

    // 释放内存
    current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
