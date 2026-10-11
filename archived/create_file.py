# Create N .c files with same comments at the top 
# // author: Lu Yi
# // date: 2025-08-27
# // input: void
# // output: print triangle
# // description: 

import os
import argparse

def create_c_files(n, fpath):
    for i in range(1, n+1):
        with open(os.path.join(fpath, f"t{i}.c"), "w") as f:
            f.write("// author: Lu Yi\n")
            f.write("// date: 2025-08-27\n")
            f.write("// input: void\n")
            f.write("// output: \n")
            f.write("// description: \n")

if __name__ == "__main__":
    # use args to get n and fpath
    parser = argparse.ArgumentParser()
    parser.add_argument("n", type=int, help="Number of .c files to create")
    parser.add_argument("fpath", type=str, help="Directory path to create files in")
    args = parser.parse_args()
    create_c_files(args.n, args.fpath)