#include <iostream>
int main(int argc, const char * argv[])
{
    FILE *a;
    char s1[200];
    char s2[200];
    if ((a=fopen("/Users/s20171105136/Downloads/untitled folder/rita/rita/rita/rita/File.strings","r"))==0)
    {
        printf("文件不存在\n");
    }
    else{
        fscanf(a,"%s ,%s",s1,s2);
        printf("%s\n%s\n",s1,s2);
    }
    
    return 0;
}
