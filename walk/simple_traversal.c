void listdir(char *name)
{
    DIR *dir;struct dirent *entry;int count;
    dir = open(name, RD);
    while (getdents(dir, entry, count) > 0) {
        foreach (dir_entry in entry) {
            if (isdir(entry->d_type)) {
                char path[1024];
                snprintf(path, 1024, "%s/%s", name, entry->d_name);
                write(1, entry->d_name);
                listdir(path);
            } else {
                write(1, entry->d_name);
            }
        }
    }
    close(dir);
}
int main(int argc, char *argv[]) {
    listdir(argv[1]);
    exit(0);
}