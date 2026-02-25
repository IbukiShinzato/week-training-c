#include "nameDB.h"

int main(int argc, char** argv)
{
    init();
    setName(0, "山田太郎");
    setName(1, "太田花子");
    setName(2, "徳川家康");
    showName(1);
    showName(2);
    showName(0);
    return 0;
}
