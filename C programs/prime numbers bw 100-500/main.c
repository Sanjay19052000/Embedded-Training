#include <stdio.h>
#include <stdlib.h>

int main()
{
    int timer=0,i,j,b;

    printf("prime numbers between 100-500 are \n");

    for (i=100; i<=500; i++)
    {
        timer=0;
        for (j=1; j<=500; j++)
        {
            if (i%j==0)
            {
                timer=++timer;
            }

        }
        if (timer==2)
        {

            printf("%d\n",i);
            timer=0;
        }
    }
}

/*prime numbers between 100-500 are
101
103
107
109
113
127
131
137
139
149
151
157
163
167
173
179
181
191
193
197
199
211
223
227
229
233
239
241
251
257
263
269
271
277
281
283
293
307
311
313
317
331
337
347
349
353
359
367
373
379
383
389
397
401
409
419
421
431
433
439
443
449
457
461
463
467
479
487
491
499*\
