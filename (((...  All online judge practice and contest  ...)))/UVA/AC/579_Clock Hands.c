#include<stdio.h>
#include<math.h>

int main()
{
    double min,hour,angl,hourangle,minuteangle;    ///AC
    while(scanf("%lf:%lf",&hour,&min)==2)
    {
        if((hour==0)&&(min==0))
            break;
        hourangle=hour*30+(min/60)*30;
        minuteangle=min*6;
        angl=(hourangle-minuteangle);
        if(angl<0)
            angl*=-1;

        if (angl>180)
            angl=360-angl;

        printf("%.3lf\n",angl);
    }
}
