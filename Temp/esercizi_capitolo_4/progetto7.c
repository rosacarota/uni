#include <stdio.h>

int main()
{	
	float i, j, k, l, m, n;
	printf("Inserisci 4 numeri: ");
	scanf("%f %f %f %f", &i, &j, &k, &l);
	
	m=i;
	if (m < j){
		n = m;
		m = j;}
	else {
		m=i;
		n=j;}
	if (m < k){
		m = k;}
	if (m < l){
		m = l;}
	if (n > k){
		n=k;}
	if (n > l){
		n=l;}
	
	printf("Questo è il numero maggiore: %.2f\n", m);
	printf("Questo è il numero minore: %.2f", n);
	
	return 0;
}
