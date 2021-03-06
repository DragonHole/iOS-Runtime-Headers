/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VTUtilities : NSObject
+(BOOL)isInternalInstall;
+(BOOL)isAlwaysOn;
+(id)deviceSoftwareVersion;
+(BOOL)isNano;
+(BOOL)VTIsHorseman;
+(void)forceReload;
+(double)_round:(double)arg1 withPlaces:(int)arg2 ;
+(BOOL)supportExternalPhraseSpotter;
+(id)getAssetHashFromConfigPath:(id)arg1 ;
+(double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)arg1 ;
+(id)deviceProductType;
+(id)deviceProductVersion;
+(id)sanitizeEventInfoForLogging:(id)arg1 ;
+(unsigned long long)deviceCategoryForDeviceProductType:(id)arg1 ;
+(BOOL)supportPremiumAssets;
+(BOOL)supportTTS;
+(double)systemUpTime;
@end

