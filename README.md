# get_file_name

```
NULL -> NULL
/    -> /
a/b  -> b
a/b/ -> b/
```

<br>

```c
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

```

引数がnullだった場合はnullを返す
<br>
```path```の最後の文字が```/```だった場合は```/```を含めて返す
<br>
