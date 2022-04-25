#include <stdio.h>

enum week{Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};

int main(void) {

    enum week w;

    const char *day_name[] = {
        "","Monday","Tuesday","Wednesday",
        "Thursday","Friday","Saturday","Sunday"
    };

    for(w=Monday; w <= Sunday; w++)
        printf("%s\n",day_name[w]);

    return 0;

}
