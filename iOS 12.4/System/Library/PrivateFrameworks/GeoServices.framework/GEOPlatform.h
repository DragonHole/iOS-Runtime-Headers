/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOPlatform : NSObject
+(id)sharedPlatform;
+(void)setIsRunningInGeod:(BOOL)arg1 ;
+(BOOL)isRunningInGeod;
-(BOOL)isInternalInstall;
-(id)osVersion;
-(id)clientCapabilities;
-(BOOL)supportsNavigation;
-(BOOL)supportsRealisticTiles;
-(id)productName;
-(double)deviceScreenScale;
-(id)hardwareModel;
-(BOOL)isCellDataPossible;
-(BOOL)_deviceSupportsNavigation;
-(BOOL)mapsFeatureFreedomEnabled;
-(BOOL)supportsNewiOS9Features;
-(BOOL)supportsForceTouch;
-(long long)deviceScreenWidthInPixels;
-(long long)deviceScreenHeightInPixels;
-(id)buildVersion;
-(id)hardwareIdentifier;
@end

