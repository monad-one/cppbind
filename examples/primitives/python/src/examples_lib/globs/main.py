from examples_lib.enums import Color
from examples_lib.globs import *
from examples_lib.simple import Project, Root

prj1 = Project("My first project")

# [glob-func-examples]
res = concat("Hello ", "Johnny")
assert res == "Hello Johnny"
res = concat1("Hello ", "Johnny ", "Jane")
assert res == "Hello Johnny Jane"

maxInt = max_int(2, 5)
assert maxInt == 5
maxString = max_str("d", "a")
assert maxString == "d"

prj1 = Project("My first project")
prj2 = Project("My second project")
pairPrjPrj = make_pair_project_project(prj1, prj2)
assert pairPrjPrj[0].title == prj1.title
assert pairPrjPrj[1].title == prj2.title

root1 = Root("/path/to/root/")
pairRootPrj = make_pair_root_project(root1, prj1)
assert pairRootPrj[0].path == root1.path
assert pairRootPrj[1].title == prj1.title
# [glob-func-examples]


color = optional_color()
assert color == Color.Red
color = optional_color(Color.Blue)
assert color == Color.Blue

int_val = optional_int()
assert int_val == 5
int_val = optional_int(8)
assert int_val == 8


optProj = optional_f_d_ptr()
assert optProj is None
optProj = optional_f_d_ptr(prj1)
assert optProj.title == prj1.title

# just calling function with no return value and arguments
do_nothing()