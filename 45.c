#include <stdio.h>
#include <string.h>
#include <limits.h>
 
int main()
{
    char s[5050];
    int cnt = 0;
    fgets(s, sizeof s, stdin);
   	for(int i=0; i<strlen(s); i++) {
   		if (i == 0) {
   			char sv[5050]; int idx = 0;
   			while(1) {
   				if (s[i] == '.' || s[i] == ',' || s[i] == ' ') {
   					break;
   				}
   				else {
   					sv[idx++] = s[i++];
   				}
   			}
   			while(idx--) {
   				printf("%c", sv[idx]);
   			} --i;
   		}
   		else if (s[i] == '.' || s[i] == ',' || s[i] == ' ') {
   			printf("%c", s[i]); char sv[5050]; int idx = 0;
   			while(1) {
   				++i;
   				if (s[i] == '.' || s[i] == ',' || s[i] == ' ' || s[i] == '\0') {
   					break;
   				}
   				else {
   					sv[idx++] = s[i];
   				}
   			}
   			while(idx--) {
   				printf("%c", sv[idx]);
   			} --i;
   		}
   	}
}