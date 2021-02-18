#include<stdio.h>
#include<time.h>

typedef enum {false,true}bool;

void check_love(bool m_love, bool l_love);

int main(void) {
	bool matt_love = true;
	bool lacey_love = true;
	check_love(matt_love,lacey_love);
	return 0;
}
void check_love(bool m_love,bool l_love){
	bool love;
	if(m_love == l_love){
		printf("Te ama\n");
	}
}
