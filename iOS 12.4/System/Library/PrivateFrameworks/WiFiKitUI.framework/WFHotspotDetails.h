/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface WFHotspotDetails : NSObject {

	NSNumber* _batteryLife;
	NSString* _cellularProtocolString;
	NSNumber* _signalStrength;

}

@property (nonatomic,retain) NSNumber * batteryLife;                       //@synthesize batteryLife=_batteryLife - In the implementation block
@property (nonatomic,copy) NSString * cellularProtocolString;              //@synthesize cellularProtocolString=_cellularProtocolString - In the implementation block
@property (nonatomic,retain) NSNumber * signalStrength;                    //@synthesize signalStrength=_signalStrength - In the implementation block
-(NSNumber *)batteryLife;
-(void)setBatteryLife:(NSNumber *)arg1 ;
-(NSNumber *)signalStrength;
-(void)setSignalStrength:(NSNumber *)arg1 ;
-(void)setCellularProtocolString:(NSString *)arg1 ;
-(BOOL)isEqualHotspotDetails:(id)arg1 ;
-(NSString *)cellularProtocolString;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

