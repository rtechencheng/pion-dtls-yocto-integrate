# Get the version by curl https://proxy.golang.org/github.com/patrickmn/go-cache/@latest
SRC_URI += "https://proxy.golang.org/github.com/patrickmn/go-cache/@v/v2.1.0+incompatible.zip;srcoutput=github.com/patrickmn/go-cache;srcinput=github.com/patrickmn/go-cache@v2.1.0+incompatible;downloadfilename=github.com-patrickmn-go-cache-v2.1.0+incompatible.zip;name=github.com-patrickmn-go-cache"
SRC_URI[github.com-patrickmn-go-cache.sha256sum] = "d5d1c13e3c9cfeb04a943f656333ec68627dd6ce136af67e2aa5881ad7353c55"

GOSRC_LICENSE += "\
    MIT \
"
LIC_FILES_CHKSUM += "\
    file://src/github.com/patrickmn/go-cache/LICENSE;md5=ad59632c93a4b0296b360ba542decb5e \
"

GOSRC_INCLUDEGUARD += "github.com-patrickmn-go-cache-sources.inc"
