# bootstrap-cxx #

bootstrap-cxx implements the basic tools needed to quickly write
autotools-enabled C++11 applications. It is opinionated in the choices it makes
regarding logging and unit-testing, and simply serves as a basis to quickly
get going.

# Dependencies #

On Fedora 21, the following should get you going:

```bash
sudo yum install gcc-c++ libstdc++-devel \
                 automake autoconf libtool sysconftool \
                 pkgconfig \
                 glog-devel gflags-devel
```

# Usage #

Run the following command to initialise the build system:

    ./autogen.sh && ./configure

`./autogen.sh` needs to be run anytime you change `configure.ac`. After the
initial run, simply calling `make` will re-run `./configure` if required.

To compile the code, simply run `make -jN`, where N is the number of cores you
want to use (for example, on a quad-core system, use `make -j4`). To run the
unit tests, run `make -jN check`.

# License #

Feel free to use this for whatever projects you'd like. There's not much to
license in this repository, but for the sake of completeness, I'm putting this
under the MIT License. See the LICENSE file for more details.
