#include <stdio.h>
#include <string.h>


char* get_file_name(char* path){
    char slash = '/';
    char* file_name = path;
    char* buf = path;

    while(1){
        if(buf == NULL){
            break;
        }

        if(strcmp(buf,"/") == 0){
            break;
        }

        if(buf[0] == '/'){
            buf++;
        }

        file_name = buf;
        buf = strchr(file_name,slash);
    }

    return file_name;
}

int main(int argc, char const *argv[]){
    printf("%s\n",get_file_name("./aaa/bbbb"));
    printf("%s\n",get_file_name("./aaa/vvvv/"));
    printf("%s\n",get_file_name("aaaaa"));
    printf("%s\n",get_file_name("aaa/aaa/seitaro"));
    printf("%s\n",get_file_name("hello/"));
    printf("%s\n",get_file_name("/python"));
    printf("%s\n",get_file_name(NULL));
    printf("%s\n",get_file_name(""));
    printf("%s\n",get_file_name("/"));
    printf("%s\n",get_file_name("/application support/code"));
    printf("%s\n",get_file_name("こんにちわ/世界"));
    printf("%s\n",get_file_name("/こんにちわ"));
    printf("%s\n",get_file_name("こんにちわ/世界/"));
    printf("%s\n",get_file_name("こんにちわ　世界/あああ")); // 全角スペース

    return 0;
}
