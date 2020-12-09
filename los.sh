#!/bin/bash
# Setup Build Env
source build/envsetup.sh

# Build for all Gprime Variants
for i in fortuna3g fortunaltedx fortunalteub fortunave3g gprimelte gprimeltespr gprimeltetfnvzw gprimeltexx gprimeltezt; do
	lunch lineage_${i}-userdebug
	mka bacon -j$(nproc --all)
done
