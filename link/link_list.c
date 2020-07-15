//
// Created by svenlee on 2020/6/7.
//

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "link_list.h"
#include "node.h"


LinkNode* create_link_list_by_node(LinkNode* node) {

  if (node == NULL) {
    return NULL;
  }

  LinkList* link_list = (LinkList*)malloc(sizeof(LinkList));
  if (node == NULL) {
    return NULL;
  }

  link_list->head = node;
  link_list->length = 1;

  return node;
}


LinkNode* create_link_list_by_data(int data) {

  LinkNode* link_node= (LinkNode*)malloc(sizeof(LinkNode));
  if (link_node == NULL) {
    return NULL;
  }

  link_node->data = data;
  link_node->next = NULL;
  link_node->prev = NULL;

  LinkList* link_list = (LinkList*)malloc(sizeof(LinkList));
  if (link_node == NULL) {
    return NULL;
  }

  link_list->head = link_node;
  link_list->length = 1;

  // return link_node;
  return link_list;
}


LinkNode* reverseListRecur(LinkNode* head) {

  if(head == NULL || head->next == NULL)
    return head;

  LinkNode* reverse = reverseListRecur(head->next);

  head->next->next = head;
  head->next = NULL;

  return reverse;
}


LinkNode* reverseList(LinkNode* head) {

  if(head == NULL || head->next == NULL)
    return head;

  LinkNode* reverseHead = NULL;
  LinkNode* current = head;

  while(current != NULL) {
    LinkNode* temp = current;
    current = current->next;
    temp->next = reverseHead;
    reverseHead = temp;
  }

  return reverseHead;
}


int list_length(LinkList* link_list) {

  if (link_list == NULL) {
    return -1;
  }

  return link_list->length;
}


int get_list_length(LinkList* link_list) {

  LinkNode* head = link_list->head;
  LinkNode* cur = head;

  int len = 0;
  while(cur != NULL) {
    len++;
    cur = cur->next;
  }

  return len;
}


void show(LinkList* link_list) {

  LinkNode* cur = link_list->head;

  while (cur != NULL) {
    printf("%d ", cur->data);
    cur = cur->next;
  }

  printf("\n");
}


int insert(LinkList* link_list, int pos, int data) {

  LinkNode* link_node= (LinkNode*)malloc(sizeof(LinkNode));
  if (link_node == NULL) {
    return -1;
  }

  if (pos < 0) {
    return -1;
  }

  if (pos > link_list->length) {
    return -1;
  }

  link_node->data = data;

  if (pos == 0) {
    if (link_list == NULL) {
      link_list->head = link_node;
    } else {
      link_node->next = link_list->head->next;
      link_list->head = link_node;
    }
  } else {
    LinkNode* cur = link_list->head;
    while (pos > 1) {
      cur = cur->next;
      pos--;
    }

    link_node->next = cur->next;
    cur->next = link_node;
  }

  return 0;
}
