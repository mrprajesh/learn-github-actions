# learn-github-actions

[![Main](https://github.com/mrprajesh/learn-github-actions/actions/workflows/build.yml/badge.svg?branch=main)](https://github.com/mrprajesh/learn-github-actions/actions/workflows/build.yml)
[![Dev](https://github.com/mrprajesh/learn-github-actions/actions/workflows/build.yml/badge.svg?branch=dev)](https://github.com/mrprajesh/learn-github-actions/actions/workflows/build.yml)

## How to create build status badges in github
1. create an action file in `.github/workflows` folder and commit.
2. Add the badge code in to readme and commit & push too see the effect.


```
## Step 1. say build.yml file

name: Build
on:
  push:
    branches: [ main ]
  pull_request:
    branches: [ main ]

jobs:
  build:
    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v2
        
    - name: Run Make
      run:  make
      
## Step 2.

[![Main](https://github.com/mrprajesh/learn-github-actions/actions/workflows/build.yml/badge.svg?branch=main)](https://github.com/mrprajesh/learn-github-actions/actions/workflows/build.yml)

```

## what does it do?
- We have two branches `main` and `dev`
- We have `build.yml` action file for them. [See here](https://github.com/mrprajesh/learn-github-actions/tree/main/.github/workflows)
- We have build status badges for them. 
- In addition to `make` and we run the executable generated.
- We purposely make the `dev`'s code to segfault to see if the `dev` badge fails.
- The expected behaviour is observed.


## Best practices
- Create different files for different branch so the logs are grouped together
