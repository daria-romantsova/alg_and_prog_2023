class Cat
{
public:
    bool isAlive;
    bool isOpen;
    Cat()
    {
        this-&gt;isAlive = rand() % 2;
        this-&gt;isOpen = false;
    }

    bool is_alive()
    {
        if (this-&gt;isOpen)
        {
            return this-&gt;isAlive;
        }
        else
        {
            return rand() % 2;
        }
    }
};
class Box
{
public:
    Cat open()
    {
        Cat cat;
        cat.isOpen = true;
        return cat;
    }
};
