void Insert_Sort(node *head) 
{ 
    node *p,*pre,*q,*r; 
    p=head->next; 
    head->next=NULL; 
    while(p) 
    { 
        pre=p->next; 
        r=head; 
        q=head->next; 
        while(q&&q->info<p->info) 
        { 
            r=q; 
            q=q->next; 
        } 
        p->next=r->next; 
        r->next=p; 
        p=pre; 
    } 
} 