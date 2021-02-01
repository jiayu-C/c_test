#include "main.h"
#include "link.h"

////////////////////////////////////////////
///////////////////////// 创建节点
////////////////////////////////////////////
//新结构建立的过程中遇到了pNext域的声明，类型是NODE_T，
//要知道pNode表示的是类型的新名字，那么在类型本身还没有建立完成的时候，这个类型的新名字也还不存在，也就是说这个时候编译器根本不认识NODE_T



////////////////////////////////////////////
///////////////////////// 初始化节点---单向
////////////////////////////////////////////

NODE_T* createNodeHead(void)
{
    NODE_T* pHeader = NULL;
    
    // printf("struct size: %d\n",sizeof(struct NODE_T));
    pHeader = (struct NODE_T*)malloc(sizeof(NODE_T));
    if (pHeader != NULL)
    { 
        pHeader->name = "first";  
        pHeader->data = 00;
        pHeader->next = NULL;
        printf("create succesful\n");
        return pHeader;
    }
    else
    {
        printf("create fail\n");
        return NULL;
    }
    
    return pHeader;
}

////////////////////////////////////////////
///////////////////////// 插入节点
////////////////////////////////////////////

void insertNode(NODE_T* pHeader, char* student,int scoer)
{
    NODE_T* pTemp = pHeader;
    NODE_T* newNode = (NODE_T*)malloc(sizeof(NODE_T));
    assert(pTemp);
    assert(newNode);

    while (pTemp->next != NULL)   
    {

        pTemp = pTemp->next;
    }                           // 到达最后节点

    newNode->name = student;
    newNode->data = scoer;
    newNode->next = pTemp->next;
    pTemp->next = newNode;
}

////////////////////////////////////////////
///////////////////////// 删除节点
////////////////////////////////////////////
void deletNode(NODE_T* pHeader,int score)
{
    NODE_T* pCurrent = pHeader;
    NODE_T* pPrevious = pHeader;
    assert(pCurrent != NULL);
    assert(pPrevious != NULL);
    while(pCurrent->next != NULL)
    {
        if(pCurrent->data == score)
        {
            printf("delet==\n");
            pPrevious->next = pCurrent->next;
            free(pCurrent);

            pCurrent = pPrevious;
        }
        
        pPrevious = pCurrent;
        pCurrent = pCurrent->next;
    }
}


////////////////////////////////////////////
///////////////////////// 链表升序
////////////////////////////////////////////


////////////////////////////////////////////
///////////////////////// 打印链表
////////////////////////////////////////////

void printfLink(NODE_T* node)
{
    NODE_T* pTemp = node;
    assert(pTemp);
    
    while (pTemp->next != NULL)
    {
        pTemp = pTemp->next; 
        printf("name: %s  score:  %d \n",pTemp->name,pTemp->data);
    }
    
}


void linkTestSingle(void)
{
    NODE_T* p = NULL;

    p = createNodeHead();

    insertNode(p,"na_1",59);
    insertNode(p,"na_2",20);
    insertNode(p,"na_3",68);
    insertNode(p,"na_4",20);
    insertNode(p,"na_5",68);    
    printfLink(p);
    printf("==========\n");
    deletNode(p,20);
    printfLink(p);
}




