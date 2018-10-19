int x=0;
int* cutSticks(int n, int *len, int *result_size)
{
	int num = n,count,i,min;
	int *p=(int *)malloc(sizeof(int)*n);
	while(num!=0)
    {
        count=0;
        min=2147483647;
        for(i=0;i<n;i++)
        {
            if(len[i]<min && len[i]!=0)
            {
                min=len[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(len[i])
            {
                ++count;
                len[i]-=min;
                if(len[i]==0)
                {
                    num-=1;
                }
            }
        }
        p[x++]=count;
        *result_size=x;
    }
    return p;
}
