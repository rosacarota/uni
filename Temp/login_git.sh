# Change username and password
USERNAME="rosacarota"
PASSWORD="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" 

# Change repository directory and repository name
REPO_PATH="~/Documenti/uni"
REPO_NAME="uni"

eval cd $REPO_PATH 
git push https://$USERNAME:$PASSWORD@github.com/$USERNAME/$REPO_NAME

# Change timeout (seconds)
TIMEOUT=3600
git config credential.helper 'cache --timeout '$TIMEOUT''

# Exit Daemon
# git credential-cache exit
