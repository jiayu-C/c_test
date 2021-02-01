#ifndef LINK_H
#define LINK_H

struct NODE  
{
    int data;   // 数据域
    char* name;  // 字符常量不可对字符数组名 = 操作
    struct NODE* next;   // 指针域
};

typedef struct NODE NODE_T;

NODE_T* createNodeHead(void);
void insertNode(NODE_T* pHeader, char* name,int scoer);
void printfLink(NODE_T* node_t);
void linkTestSingle(void);

#endif
