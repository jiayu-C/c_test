#ifndef LINK_H
#define LINK_H

struct NODE_T  
{
    int data;   // 数据域
    char* name;  // 字符常量不可对字符数组名 = 操作
    struct NODE_T* next;   // 指针域
};

//


struct NODE_T* createNodeHead(void);
void insertNode(struct NODE_T* pHeader, char* name,int scoer);
void printfLink(struct NODE_T* node_t);
void linkTest(void);

#endif
