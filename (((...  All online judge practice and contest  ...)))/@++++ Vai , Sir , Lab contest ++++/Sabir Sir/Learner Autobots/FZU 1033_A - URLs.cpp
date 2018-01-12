#include <stdio.h>
#include <string.h>

int main()
{
    int tcas,c=1;
    scanf("%d",&tcas);
    getchar();
    while(tcas--)
    {
        char str[65];
        char protocol[60],host[60],port[60],path[60];       ///AC
        gets(str);
        int len,i;
        len = strlen(str);
        int pro = 0,hst = 0,prt = 0,pat = 0;
        for(i=0; i<len;i++)
        {
            if(str[i] != ':' && pro == 0)
            {
                int k=0;
                while(str[i] != ':' && i < len)
                    protocol[k++] = str[i++];

                protocol[k] = '\0';
                pro = 1;
                i+= 3;

            }
            if(str[i] != ':' && hst == 0)
            {
                int k = 0;
                while((str[i] != ':' && str[i] != '/') && i < len)
                {
                    host[k++] = str[i++];

                }

                host[k] = '\0';
                hst = 1;
                //i++;

            }
            if(str[i] == ':' && prt == 0)
            {
                int k = 0;
                i++;
                while(str[i] != '/' && i < len)
                {
                    port[k++] = str[i++];

                }

                port[k] = '\0';
                prt = 1;


            }

            if(str[i] == '/' && i < len && pat == 0)
            {
                int k = 0;
                i++;
                while(i < len)
                {
                    path[k++] = str[i++];

                }

                path[k] = '\0';
                pat = 1;

                break;
            }
        }

        //cerr << "###" << protocol << endl;

        printf("URL #%d\n",c++);

        printf("Protocol = %s\n",protocol);
        printf("Host     = %s\n",host);
        if(port[0] == '\0')
        {
            printf("Port     = <default>\n");
        }
        else
            printf("Port     = %s\n",port);
        if(path[0] == '\0')
        {
            printf("Path     = <default>\n");
        }
        else
            printf("Path     = %s\n",path);

        strcpy(protocol,"\0");
        strcpy(host,"\0");
        strcpy(port,"\0");
        strcpy(path,"\0");

        printf("\n");

    }

    return 0;
}
