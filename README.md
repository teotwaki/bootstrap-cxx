# bootstrap-cxx #

bootstrap-cxx implements the basic tools needed to quickly write
autotools-enabled C++11 applications. It is opinionated in the choices it makes
regarding logging and unit-testing, and simply serves as a basis to quickly
get going.

# Dependencies #

On Fedora 22, the following should get you going:

```bash
sudo dnf install gcc-c++ libstdc++-devel \
                 automake autoconf libtool sysconftool \
                 pkgconfig \
                 glog-devel gflags-devel
```

The following is a list of the tools used in this repository:

- [autotools][autotools-manual], the main build system;
- [Catch][catch-tutorial], the unit-test framework;
- [glog][glog-usage], the Google logging framework.

# Usage #

Run the following command to initialise the build system:

    ./autogen.sh && ./configure

`./autogen.sh` needs to be run anytime you change `configure.ac`. After the
initial run, simply calling `make` will re-run `./configure` if required.

To compile the code, simply run `make -jN`, where N is the number of cores you
want to use (for example, on a quad-core system, use `make -j4`). To run the
unit tests, run `make -jN check`.

# Customisation #

## Project name and version ##

The main customisation is going to take place in `configure.ac`. The third and
fourth lines would be where you'd put your projects details:

- package name ("My Great App");
- version ("1.6.8");

The last three are completely optional:

- bug-reporting email address;
- tarname (base name for the archive file);
- project URL.

Note: Instead of hard-coding your project name in the source, use the define'd
values in config.hh:

```cpp
#include "config.hh"

cout << "My project is: " << PACKAGE_NAME << endl;
```

`PACKAGE_NAME` comes directly from the first argument (package name) passed to
`AC_INIT`.

## Binaries ##

The second area of customisation is the name of the binaries/libraries you'll
be compiling. Look at `Makefile.am`, and notice the 6th line: this is where you
define the name of your binary. You tell Automake which source files to compile
by changing the lines around `bootstrap_cxx_SOURCES`. Check the [autotools
manual][autotools-manual] for more details.

# License #

Feel free to use this for whatever projects you'd like. There's not much to
license in this repository, but for the sake of completeness, I'm putting this
under the MIT License. See the LICENSE file for more details.

[autotools-manual]: http://www.gnu.org/software/automake/manual/html_node/Autotools-Introduction.html
[catch-tutorial]: https://github.com/philsquared/Catch/blob/master/docs/tutorial.md#writing-tests
[glog-usage]: https://google-glog.googlecode.com/svn/trunk/doc/glog.html
