/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFNetworkListRecord.h>

@class SFRemoteHotspotDevice, NSString;

@interface WFHotspotDevice : NSObject <WFNetworkListRecord> {

	SFRemoteHotspotDevice* _hotspotDevice;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SFRemoteHotspotDevice * hotspotDevice;              //@synthesize hotspotDevice=_hotspotDevice - In the implementation block
@property (nonatomic,readonly) NSString * ssid; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)title;
-(unsigned long long)uniqueIdentifier;
-(id)subtitle;
-(NSString *)ssid;
-(long long)rssi;
-(BOOL)isSecure;
-(BOOL)isKnown;
-(long long)securityMode;
-(BOOL)isAdhoc;
-(SFRemoteHotspotDevice *)hotspotDevice;
-(BOOL)_isEqualToHotspotDevice:(id)arg1 ;
-(BOOL)_isEqualToNetwork:(id)arg1 ;
-(BOOL)iOSHotspot;
-(id)initWithHotspotDevice:(id)arg1 ;
-(void)setHotspotDevice:(SFRemoteHotspotDevice *)arg1 ;
-(BOOL)isHotspot20;
-(float)scaledRSSI;
-(BOOL)isUnconfiguredAccessory;
-(BOOL)isEnterprise;
-(unsigned long long)signalBars;
-(void)setScaledRSSI:(float)arg1 ;
-(BOOL)isPopular;
-(BOOL)prominentDisplay;
-(BOOL)isInstantHotspot;
-(id)hotspotBatteryLife;
-(id)hotspotSignalStrength;
-(id)hotspotCellularProtocol;
-(BOOL)canBeDisplayedAsCurrent;
@end

