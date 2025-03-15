# Git Cheat Sheet

## Basic Git Commands

### 🔹 Initializing & Cloning
```bash
# Initialize a new Git repository
git init

# Clone an existing repository
git clone <repo-url>
```

### 🔹 Staging & Committing
```bash
# Add all changes to staging area
git add .

# Add specific file
git add <filename>

# Commit changes with a message
git commit -m "Your commit message"
```

### 🔹 Branching
```bash
# List all branches
git branch

# Create a new branch
git branch <branch-name>

# Switch to a branch
git checkout <branch-name>

# Create and switch to a new branch
git checkout -b <branch-name>
```

### 🔹 Merging & Rebasing
```bash
# Merge branch into current branch
git merge <branch-name>

# Rebase branch
git rebase <branch-name>
```

### 🔹 Pushing & Pulling
```bash
# Push changes to remote
git push origin <branch-name>

# Pull latest changes from remote
git pull origin <branch-name>
```

### 🔹 Resetting & Reverting
```bash
# Undo last commit but keep changes
git reset --soft HEAD~1

# Undo last commit and discard changes
git reset --hard HEAD~1

# Revert a specific commit
git revert <commit-hash>
```

### 🔹 Undo & Clean
```bash
# Discard unstaged changes
git checkout -- <filename>

# Remove untracked files (use with caution)
git clean -f
```

### 🔹 Checking Status & Logs
```bash
# Show modified files
git status

# Show commit history
git log --oneline --graph
```

### 🔹 Gitignore & Removing Tracked Files
```bash
# Remove a file from Git tracking but keep locally
git rm --cached <file>

# Remove all tracked files listed in .gitignore
git rm -r --cached .

# Commit after updating .gitignore
git commit -m "Updated .gitignore"
```

### 🔹 Stashing (Save Temporary Changes)
```bash
# Stash uncommitted changes
git stash

# List all stashes
git stash list

# Apply latest stash
git stash apply

# Apply and delete latest stash
git stash pop
```

### 🔹 Remote Management
```bash
# Add a remote repository
git remote add origin <repo-url>

# Show remote repositories
git remote -v

# Change remote repository URL
git remote set-url origin <new-repo-url>
```