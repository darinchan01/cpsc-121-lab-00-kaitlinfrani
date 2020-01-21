# CPSC 121 Lab 00: Getting Started

The purpose of this lab is to ensure you are familiar with [Tuffix](https://github.com/kevinwortman/tuffix), git, GitHub, and able to work with C++ source code.

## Goals
* Install or use Tuffix; verify that you are comfortable working with the BASH shell
* Use git to clone a project from GitHub, compile & run the code, modify the code, compile & run the code with changes, and push the changes back successfully
* Submit your GitHub username to the instructor
* Request a long term laptop loan if needed

## Part 0 GitHub Account
You may use an existing GitHub account or create a new one.

Ensure that the account you use with this course adheres to the following rules:
* Use your @csu.fullerton.edu email address
* Select a GitHub username that will not cause you any shame or embarrassment

Instructions on how to create a GitHub account are online at https://help.github.com/en/articles/signing-up-for-github. Please select the ‘free’ account (free as in zero cost).

You may also be interested in the (GitHub Student Developer Pack)[https://education.github.com/pack] which provides a verified student a number of discounts and perks. (Be aware that there is no such thing as a free lunch.)

Please visit the Google form [Student GitHub Usernames](https://forms.gle/xPGfHQFiiBcgWWko7) and complete the form. **The GitHub user name you provide will be used for the remainder of the semester. Do not make a mistake entering in your GitHub name or your work will not be graded.**

Please read the first three chapters of (Pro Git)[https://git-scm.com/book/en/v2].

(Did you read the first three chapters?)

## Part 1 Installing Tuffix
Thie course requires that you use Tuffix for all your lab assignments and projects. It is absolutely neccessary that you have access to a computer that has Tuffix.

Although the laboratory computers have Tuffix available as virtual machines, you are directed to perform a bare metal installation of Tuffix on your own personal computer, ideally a laptop. A bare metal installation is also called a native install.

[Instruction on how to perofrm a native install of Tuffix are online.](https://github.com/kevinwortman/tuffix/blob/master/install.md)

Your instructor has copies of Tuffix available on USB memory sticks for you to use should you not have your own copy for installation.

If you do not have a laptop for use in this class, you may request a [long term loan from the CSUF library](https://www.fullerton.edu/it/students/equipment/longtermlaptop.php). Please complete the online form at (https://forms.gle/q7kjB2xrtT6wEiaj8) and your instructor will file a request on your behalf. Please make this request no later than the end of the first week of instruction since there is a limited number of laptops available.

To complete this part of the lab, using your favorite text editor such as Atom or Emacs, create a file named `tuffix.txt` in the directory named `part-1` of this repository. In the file, copy and past the following passage:
```
"The cost of liberty is less than the price of repression."
from John Brown by W.E.B. Du Bois
```

Remember that you need to use the `git add tuffix.txt` command to add any newly created files.

If you are starting from a new Tuffix installation you may have to reconfigure your git client when you `git push`. Recall that you'll need to set your `user.name` which is your first and last name and your `user.email` which is your CSUF email address. For example:
```
git config --global user.name "Kai Nguyen"
git config --global user.email kai.nguyen@csu.fullerton.edu
```

Commit the changes to the repository, for instance `git commit -a -m "initial commit"`. Then push the changes to GitHub's copy using `git push origin master`.

## Part 2 Hello World Plus Plus
In the directory named `part-2`, there is a file named `hello_world.cpp`. Compile this program using the command `clang++ -std=c++17` command. For example, the command `clang++ -std=c++17 hello_world.cpp -o hello_world` will compile the program and output the binary as `hello_world`. Run the program and verify that it works.

First, edit the top of the file to include the appropriate header for this file. All files in this class must have your first and last name, the class and section, and your email address.

Next, modify the program such that the first command line argument replaces the word `world` with the string in `argv[1]`. If the user forgets to provide an argument print the message `Too few arguments.` to the terminal and exit with a return value of `1`.

Finally, modify the the program such that the hello message is printed as many times as specfied in `argv[2]`. For example, if `argv[1]` is `Erin` and `argv[2]` is `3`, then the program will print:
```
Hello Erin
Hello Erin
Hello Erin
```

Again, if there are two few argments, print the message `Too few arguments.` to the terminal and exit with a return value of `1`.

Commit and push your changes.


