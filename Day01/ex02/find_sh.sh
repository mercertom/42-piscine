find . \( -name "*.sh" \) -print | sed -e 's/\(.*\)\///'  | sed -e 's/\.sh$//'
