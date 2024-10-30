# Dree

One single package for visualization, debugging, and exploration of folder hierarchies.

Say no to bulky file managers with Dree.

## Preview

###### Blog : [Link](https://dev.to/ujjwall-r/i-tried-making-a-terminal-based-file-exploration-package-2142)

Dree presents the folders in a tree-like format, with the main folder at the top and its subfolders branching out below it. This makes it easier for you to see how the folders are organized and navigate through them.

One cool thing about Dree is that you can decide how many levels of folders you want to see at a time. For example, if you only want to see the main folder and its immediate subfolders, you can set the depth to 1. If you want to see more levels of folders, you can increase the depth accordingly. This allows you to focus on the specific parts of the folder structure that are most relevant to you.

![levels](https://github.com/user-attachments/assets/14f3f131-0dad-4811-be40-2e1487b2b80f)

In addition to displaying the directory structure, Dree offers a powerful search feature within the directory tree. Users can search for specific files or folders within the entire directory structure. Furthermore, Dree allows users to manually adjust their search space by setting the depth level.

![search](https://github.com/user-attachments/assets/dbad70da-ce29-4849-b108-46018cc8f79c)

The recommendation feature proves to be particularly helpful when users are unsure about the exact spelling or naming of a file or folder.

![search2](https://github.com/user-attachments/assets/cfdffb7a-1237-486e-be28-51d46ced1c41)

## Disclaimer

**Important:** This project is undergoing active development, and changes, improvements, and bug fixes are being made frequently.

# Installation

To run the Directory Tree Visualizer project, follow these steps:

1. Ensure you have C++17 compiler and development environment set up on your linux or mac system
2. Clone the project repository to your local machine.

```shell
git clone https://github.com/ujjwall-R/Dree
cd Dree
if [ ! -d "compile" ]; then mkdir compile; fi && make clean
```

Add path to `dree.sh` in `~/.bashrc`. If you use zsh add the path in `~/.zshrc`.

```
# Add the following line at the end of the ~/.bashrc file
alias dree='. path/to/project/dree.sh'
```

Restart terminal or run:

```shell
source ~/.bashrc
```

## Usage

### Print Dree (Directory tree)

Run `dree` followed by number of nested levels you want to visualise:

```shell
dree 3
```

### Run Dree TUI File Navigator

Use the flag -n.

```shell
dree 2 -n
```

![Nav-Demo](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/xzcmfhyivbgomwx6bm9n.gif)

### Search file or folder in a directory upto certain depth

```shell
#eg. search a folder in current directory upto 3 depth
dree 3 -f "directory_name"
#eg. search a file in current directory upto 5 depth
dree 5 -f "file_name"
```

### Show files currently being ignored

Dree includes a `.dreeignore` file that enlists some commonly ignored files and directories. This can be overriden be the use of the `-a` flag.

![dreeignore](https://github.com/user-attachments/assets/59047ae9-2ff4-4201-8069-5656db46a95b)

As you can see, directories like `node_modules` and files like `.gitignore` are included when the `-a` flag is issued.

# Development

## How to Run [Development]

To run the Directory Tree Visualizer project, follow these steps:

1. Ensure you have C++17 compiler and development environment set up on your linux or mac system
2. Clone the project repository to your local machine.

```shell
cd Dree
```

### Build

```shell
if [ ! -d "compile" ]; then mkdir compile; fi && make clean
```

### Run

```shell
make run
```

### Compile the changes

```shell
make all
```

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

## License

[MIT](https://choosealicense.com/licenses/mit/)
