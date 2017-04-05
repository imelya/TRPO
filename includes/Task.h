#ifndef TASK_H
#define TASK_H


class Task
{
    public:
        int operator () (int value);
        Task();
        virtual ~Task();

    protected:

    private:
};

#endif // TASK_H
