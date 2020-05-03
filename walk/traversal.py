import os
from queue import Queue

path = "../"  # source folder

q = Queue()
q.put(path)

while not q.empty():
    p = q.get()
    p_list = os.listdir(p)
    for i in p_list:
        temp_p = os.path.join(p, i)
        if os.path.isdir(temp_p):
            q.put(temp_p)
            continue
        # do something
        print(temp_p)
