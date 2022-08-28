/*
 ============================================================================
 Name        : c291-c.c
 Author      : Thousand AI
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int a[50000] = {};
	bool b[50000] = {};
	int N;
	int ans = 0;
	scanf("%d", &N);
	for(int i = 0; i < N; ++i){
		scanf("%d", &a[i]);
		b[i] = false;
	}
	for(int i = 0; i < N; ++i){
		if(b[i] == false){
			int k = i;
			while(b[k] == false){
				b[k] = true;
				k = a[k];
			}
			ans++;
		}
	}
	printf("%d\n",ans);

	return 0;
}
