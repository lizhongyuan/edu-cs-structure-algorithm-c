//
// Created by svenlee on 2020/6/7.
//

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "link_list.h"
#include "node.h"


int main(int argc, char** argv) {

  int data = 1;

  LinkList* link_list = (LinkList *) create_link_list_by_data(data);
  if (link_list == NULL) {
    return -1;
  }

  insert(link_list, 1, 2);
  /*
  // test list length
  int link_list_len = list_length(link_list);
  printf("link list length: %d\n", link_list_len);
   */

  show(link_list);

  return 0;
}
