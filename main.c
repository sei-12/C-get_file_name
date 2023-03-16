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

    // char *s = "ABCDEFGABCDEFG";
    // int c = 'C';
    // char *ret;

    // ret = strrchr( s, c );
    // if( ret != NULL ){
    //     printf( "%cを%ld番目に発見しました\n", c, ret - s );
    //     printf("%s\n",ret); // CDEFG
    //     ret++;
    //     printf("%s\n",ret); // DEFG
    // }
    // else{
    //     printf( "%cは発見出来ません¥n", c );
    // }

    // char* test1 = "/users/aaa/doc/aaa";
    // char slash = '/';
    // char* file_name;

    // file_name = strrchr(test1,slash);
    // printf("%s\n",file_name);

    // // この場合に /f を出力させたい
    // char* test2 = "/aaa/ssss/f/";
    // file_name = strrchr(test2,slash);
    // printf("%s\n",file_name);

    return 0;
}
