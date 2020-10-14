for i in fortuna3g fortunaltedx fortunalteub fortunave3g gprimelte gprimeltespr gprimeltetfnvzw gprimeltexx gprimeltezt j53gxx j5lte j5ltechn j5nlte; do
        source build/envsetup.sh
        lunch lineage_${i}-userdebug
        mka bacon -j16
done
