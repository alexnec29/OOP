#include <iostream>

template <class T>
template <typename T>
bool compare_shit(T left, T right)
{
    if (left > right)
    {
        return true;
    }
    else return false;
}

class Tree
{
    T value;
    Tree** copchii;
    int nr_copchii;
public:
    Tree()
    {
        value = NULL;
        copchii = new Tree * [100];
        nr_copchii = 0;
    }
    bool add_node(T value, Tree* source)
    {
        if (source == nullptr)
        {
            copchii[nr_copchii] = new Tree();
            copchii[nr_copchii]->value = value;
            nr_copchii++;
            return true;
        }
        for (int i = 0; i < nr_copchii; i++)
        {
            if (copchii[i]->add_node(value, source) == true)
            {
                return true;
            }
        }
        return false;
    }
    Tree* get_node(T value)
    {
        Tree* ret_value = NULL;
        if (this->value == value)
            return this;
        for (int i = 0; i < nr_copchii; i++)
        {
            ret_value = get_node(copchii[i]);
            if (ret_value != NULL)
            {
                return ret_value;
            }
        }
        return NULL;
    }
    bool delete_node(Tree* node)
    {
        if (node == NULL)
        {
            return false;
        }
        for (int i = 0; i < node->nr_copchii; i++)
        {
            delete_node(node->copchii[i]);
            delete copchii[i];
        }
        delete[] copchii;
    }
    //Tree* find(T value, bool (*search_function)(T left, T right))

};

int main()
{
    Tree<int> t;
}
