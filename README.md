# learn-github-actions

[![Main](https://github.com/mrprajesh/learn-github-actions/actions/workflows/build.yml/badge.svg?branch=main)](https://github.com/mrprajesh/learn-github-actions/actions/workflows/build.yml)
[![Dev](https://github.com/mrprajesh/learn-github-actions/actions/workflows/build.yml/badge.svg?branch=dev)](https://github.com/mrprajesh/learn-github-actions/actions/workflows/build.yml)

## what does it do?
- We have two branches `main` and `dev`
- We have `build.yml` action file for them. [See here](https://github.com/mrprajesh/learn-github-actions/tree/main/.github/workflows)
- We have build status badges for them. 
- In addition to `make` and we run the executable generated.
- We purposely make the `dev`'s code to segfault to see if the `dev` badge fails.
- The expected behaviour is observed.

