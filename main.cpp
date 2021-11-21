#include <iostream>
#include <map>

int main()
{
    std::map<std::string, int> queue;
    do
    {
        std::string input;

        std::cin >> input;

        if (input == "next")
        {
            std::cout << (queue.begin())->first << std::endl;
            if ((queue.begin())->second > 1)
                (queue.begin())->second--;
            else
                queue.erase(queue.begin());
        }
        else if (queue.find(input) == queue.end())
        {
            queue[input] = 1;
        }
        else
            queue[input]++;

    } while (!queue.empty());


}