# Get the version by curl https://proxy.golang.org/github.com/dsnet/golib/@latest
SRC_URI += "https://proxy.golang.org/github.com/dsnet/golib/@v/v1.0.2.zip;srcoutput=github.com/dsnet/golib;srcinput=github.com/dsnet/golib@v1.0.2;downloadfilename=github.com-dsnet-golib-1.0.2.zip;name=github.com-dsnet-golib"
SRC_URI[github.com-dsnet-golib.sha256sum] = "2fc1663274c6e927d12232d6f6f6bc4e8f79582dc8316ec8d315a82ef025d125"

GOSRC_LICENSE += "\
    BSD-3-Clause \
"
LIC_FILES_CHKSUM += "\
    file://src/github.com/dsnet/golib/LICENSE.md;md5=7f45421de5fe47c781c28dbd70ddd0de \
"

GOSRC_INCLUDEGUARD += "github.com-dsnet-golib-sources.inc"
