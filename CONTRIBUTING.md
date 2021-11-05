# Contributing

## Code of Conduct

All interactions on GitHub must follow the standard Code of Conduct.

-   Be respectful
-   Data published to Radon can be removed, changed, or not credited.
-   We're always here for you
-   Slurs, rude, insulting, or cruel language will not be tolerated.

## Reporting Bugs

We request that you first search to see if the bug already exists, and if it is a unique problem submit the issue via one of our issue templates. Duplicate issues may be closed without a response.

You can report bugs at our [Issues Page](https://www.github.com/Dollor-Lua/Radon/issues)

## Development

1. Close this repository

```
$ git clone git@github.com:Dollor-Lua/Radon.git Radon
```

2. Navigate into the project & install dependencies

```
$ cd ./Radon && yarn
or
$ cd ./Radon && npm install
```

3. Write code and/or add new tests
4. Run tests and ensure they pass
    - Read scripts/README.md for more info on testing.
5. Open a Pull Request, and if it gets accepted become the newest contributor for `Radon`!

### Allowed stuff:

-   You are allowed to use typescript, but you must compile it before making a pull request.
-   CommonJS, try to avoid ES6.

# What _not_ to contribute

## Tools/Automation

We request that you do not edit any of the top level files that help with overall automation or are
a tool to use to make development easier. (ex: `.gitignore`, `package.json`, etc.)
