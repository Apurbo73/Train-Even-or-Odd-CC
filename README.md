# Train Even-or-Odd-CC


This is a sequence of Git commands used to initialize a new Git repository, create a commit, and push it to a remote repository on GitHub. Here's a breakdown of each command:

---

### 🔹 **Command-by-command explanation:**

1. **`echo "# Train-Even-or-Odd-CC" >> README.md`**

   * Creates (or appends to) a file named `README.md` with the heading `# Train-Even-or-Odd-CC`.
   * This is usually a description or title for your project.

2. **`git init`**

   * Initializes a new Git repository in the current directory.
   * Creates a `.git` folder to track version history.

3. **`git add README.md`**

   * Stages the `README.md` file for commit.
   * It tells Git you want to include this file in the next commit.

4. **`git commit -m "first commit"`**

   * Commits the staged file with a message `"first commit"`.
   * This is your initial snapshot of the repository.

5. **`git branch -M master`**

   * Renames the current branch to `master`.
   * Useful if the default branch is something else (like `main`).

6. **`git remote add origin https://github.com/Apurbo73/Train-Even-or-Odd-CC.git`**

   * Adds a remote repository named `origin` that points to the GitHub URL.
   * This links your local repo with the one on GitHub.

7. **`git push -u origin master`**

   * Pushes your local `master` branch to the `origin` remote.
   * The `-u` flag sets up tracking so future pushes/pulls can use just `git push` or `git pull`.

---

### ✅ **In short:**

This script creates a Git repository, adds a README file, commits it, connects the repo to GitHub, and pushes the first commit to the remote repository.
