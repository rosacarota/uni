int IMN(Queue q, item max, int n) {
	int i;
	item max; 
	struct node *curr, *maxpos, *tmp; 

	if (!q || q->numel < n); 

	curr = q->head; 
	max = curr->value; 
	maxpos = curr; 
	
	for (i = 1; i < n; i++) {
		curr = curr->next; 

		if (curr->value > max) {
			max = curr->value; 
			maxpos = curr; 
		}
	}

	tmp = malloc(sizeof(struct node));
	if (!tmp) return 0; 

	tmp->value = elem; 

	tmp->next = maxpos->next; 
	maxpos->next = tmp; 
	
	(q->numel)++;
	
	reuturn 1;
}

