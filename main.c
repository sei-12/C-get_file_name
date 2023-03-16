#include <stdio.h>
#include <string.h>


char* get_file_name(char* path){

}

void test_get_file_name(){
    printf("%s\n",get_file_name("./aaa/bbbb"));
    printf("%s\n",get_file_name("./aaa/vvvv/"));
    printf("%s\n",get_file_name("aaaaa"));
    printf("%s\n",get_file_name("aaa/aaa/seitaro"));
    printf("%s\n",get_file_name("hello/"));
    printf("%s\n",get_file_name("/python"));
}

int main(int argc, char const *argv[]){
    test_get_file_name();

    return 0;
}
