# Get the version by curl https://proxy.golang.org/github.com/pion/udp/@latest
SRC_URI += "https://proxy.golang.org/github.com/pion/udp/@v/v0.1.1.zip;srcoutput=github.com/pion/udp;srcinput=github.com/pion/udp@v0.1.1;downloadfilename=github.com-pion-udp-v0.1.1.zip;name=github.com-pion-udp"
SRC_URI[github.com-pion-udp.sha256sum] = "99319908ba7cf74bb67233db9c7f518099ecdeb5106a50e6e7caef4c8e78fd2b"

GOSRC_LICENSE += "\
    MIT \
"
LIC_FILES_CHKSUM += "\
    file://src/github.com/pion/udp/LICENSE;md5=2470c8bb99bf9aa52bff42d9618dbb52 \
"

GOSRC_INCLUDEGUARD += "github.com-pion-udp-sources.inc"
