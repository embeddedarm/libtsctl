#ifndef __dioctlConfig_h
#define __dioctlConfig_h
#include "System.h"
void dioctl_config_add2(char *names,int len,int lenout);
void dioctl_config_add(char **names);
extern NameValuePair **archmapptr;
extern NameValuePair *archmap;
#endif
