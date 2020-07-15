//
// Created by svenlee on 2020/6/7.
//

#ifndef EDU_CS_STRUCTURE_ALGORITHM_C_LINK_LIST_H
#define EDU_CS_STRUCTURE_ALGORITHM_C_LINK_LIST_H

#include "node.h"

typedef struct LinkList {

  int length;

  LinkNode* head;

} LinkList;


LinkNode* create_link_list_by_node(LinkNode* node);

LinkNode* create_link_list_by_data(int data);

int list_length(LinkList* link_list);

int get_list_length(LinkList* link_list);

LinkNode* reverseListRecur(LinkNode* head);

void show(LinkList* link_list);

int insert(LinkList* link_list, int pos, int data);

#endif //EDU_CS_STRUCTURE_ALGORITHM_C_LINK_LIST_H
