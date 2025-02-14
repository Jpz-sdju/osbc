#define PROC_NUM (16)
enum process_state
{
    SLEEP,
    READY,
    RUNNING,
    DEAD
};
struct process
{
    int pid;
    enum process_state state;
};
