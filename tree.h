#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

typedef enum {ID_node, STRLIT_node, BOOLLIT_node, DECLIT_node,OTHER_node, REALLIT_node} node_type;

typedef struct node
{
    struct node* parent;
    struct node* left;
    struct node* right;
    struct node** children;
    node_type nodeType;
    char* nodeTypeName;
    char* var;
    int numChildren;
}node;


node* createNode(node_type nodeType, char* nodeTypeName, char* var);
void addChild(node* parent, node* child);
void addBrother(node* left, node* right);
void printTree(node* current, int level);
void clearTree(node* current);

#endif // TREE_H_INCLUDED