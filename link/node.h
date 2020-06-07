//
// Created by svenlee on 2020/6/7.
//

#ifndef EDU_CS_STRUCTURE_ALGORITHM_C_NODE_H
#define EDU_CS_STRUCTURE_ALGORITHM_C_NODE_H


typedef struct LinkNode {

  int data;

  struct LinkNode *next;

  struct LinkNode *prev;

} LinkNode;


#endif //EDU_CS_STRUCTURE_ALGORITHM_C_NODE_H
