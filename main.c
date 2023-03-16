#include <stdio.h>
#include <string.h>


char* get_file_name(char* path){
    // char slash = '/';
    // char* file_name = strrchr(path,slash);

    // if(file_name == NULL){
    //     return path;
    // }

    // if(strcmp(file_name,"/") != 0){
    //     return file_name;
    // }
    // printf("-----\n");
    // char* aaa = &path[ file_name - path];

    // while(aaa){ // おそらく文字が終わっても終わっていない
    //     aaa--;
    //     if(*aaa == '/'){
    //         return aaa;
    //     }
    // }

    // return path;

    

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
