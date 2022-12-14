#include "randWalk.h"

int main()
{
    Vector step;
    Vector result(0.0, 0.0);
    double direction;//方向，单位是角度
    double distance;//目标移动的位移大小
    double length;//每一步的长度

    srand((unsigned int)time(NULL));
    cout << "请输入预定位移大小：";
    cin >> distance;
    cout << "请输入每一步的长度:";
    cin >> length;
    if(!length) exit(ERROR);
    int count = 0;
    unsigned int sum = 0;
    while(count < 1000)
    {
        count++;
        cout << "第" << count << "次实验" << endl;
        unsigned int countSteps = 0;
        while(result.getDistance() < distance)
        {
            direction = rand() % 360;
            step.vectorReset(length, direction);
            result = result + step;
            countSteps++;
            step.initVector();
        }
        cout << "达到预定位移大小" << endl;
        cout << "现在的坐标是：" << result;
        cout << "共经过" << countSteps << "步" << endl;
        cout << "平均步长为：" << result.getDistance() / countSteps << endl;
        result.initVector();
        sum += countSteps;
        Sleep(10);
    }
    cout << "实验结束" << endl;
    cout << "平均步数为: " << sum / 1000 << endl; 
    system("pause");
    return 0;
}