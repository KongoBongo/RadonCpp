# v1.0.6 (2021-11-02)

## Bug Fixes

-   (->) Patched `v1.0.4` issue #1: test's inability to run inverse successes
-   (->) Patched `v1.0.4` issue #2: test reading any secondary test script as "0"
-   (->) Patched `v1.0.4` issue #3: test not writing arguments correctly

## Additions

-   (->) Added support to use Radon directly in the console with arguments
-   (>>) Added `-r/--run` command support for inline console coding. Used to run code via the console.
-   (>>) Added `tests/app/interpret.js` to test errors
-   (>>) Added `tests/app/math.js` to test simple math operations
-   (->) Added last parameter option for tests known as `inverse (bool)`. Used to prevent writing to `test-session.log`

## Changes

-   (--) Removed `MacOS & Linux` folder, added `start2`, `test2`, and `pkg2` to package.json.
-   (--) Updated `CONTRIBUTING.md` and `scripts/README.md` to account for this change.
-   (--) Added warning to `reload` command that it does not work with compiled apps.

# v1.0.4 (2021-11-01)

## Additions

-   (>>) Added `yarn test` command
-   (>>) Added basic command tests

# v1.0.3 (2021-10-31) `HALLOWEEN`

## Bug Fixes

-   (->) Patched `v1.0.0` issue #4: Failing to interpret anything but a math operation
-   (--) Updated `v1.0.1` issue #1: Failing to return the correct error

## Additions

-   (>>) Fixed `v1.0.0` issue #3: Added
-   (>>) Added `reload` command.

# v1.0.2 (2021-10-29)

## Bug Fixes

-   (--) Patched `v1.0.0` issue #2: Failing to interpret the second number in math functions if the minus is touching the first number.

# v1.0.1 (2021-10-28)

## Bug Fixes

-   (--) Patched `v1.0.0` issue #1: Failing to interpret the second number in math functions.

## Additions

-   (>>) Added support for negative numbers and decimals.

# v1.0.0 (2021-10-27)

## (>>) Development Starts
