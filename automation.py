import os
from git import Repo
import shutil

# Set the path to your local repository folder and the paths to the folders
local_repo_path = 'D:\\Daily Git cpp\\Cpp'
not_posted_folder = 'D:\\Daily Git cpp\\Cpp\\not posted'
to_be_posted_folder = 'D:\\Daily Git cpp\\Cpp\\to be posted'

# Initialize the Git repository object
repo = Repo(local_repo_path)

# Get a list of all CPP files in the "not posted" folder
cpp_files = [file for file in os.listdir(not_posted_folder) if file.endswith('.cpp')]

if cpp_files:
    # Take the first CPP file from the list
    code_file = cpp_files[0]

    # Move the code file to the "to be posted" folder
    src_path = os.path.join(not_posted_folder, code_file)
    dst_path = os.path.join(to_be_posted_folder, code_file)
    shutil.move(src_path, dst_path)

    # Stage the changes
    repo.git.add(all=True)

    # Commit the changes
    repo.git.commit('-m', 'Upload new code')

    # Push the changes to the remote repository
    origin = repo.remote(name='origin')
    origin.push()
else:
    print("No CPP files found in the 'not posted' folder.")
