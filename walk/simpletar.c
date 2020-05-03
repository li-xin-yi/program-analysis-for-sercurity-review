int main(int argc, char **argv){
    source_dir = argv[1]; target_file = argv[2];
    target_fd = open(target file, WR);
    push(source_dir); // uses a global stack
    while (dir_name = pop()) != NULL) {
            dir = opendir(dir_name);
            foreach (dir entry in dir) {
                if (isdirectory(dir_entry))
                    push(dir_entry);
                else {
                    source_fd = open(dir_entry, RD);
                    read(source_fd, buf);
                    write(target_fd, buf);
                    close(source_fd);
                }
            }
        }
    close(target_fd);
    exit(0);
}