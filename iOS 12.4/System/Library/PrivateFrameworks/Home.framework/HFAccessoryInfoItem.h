/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HMAccessory;

@interface HFAccessoryInfoItem : HFItem {

	unsigned long long _infoType;
	HMAccessory* _accessory;

}

@property (nonatomic,retain) HMAccessory * accessory;                  //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic) unsigned long long infoType;              //@synthesize infoType=_infoType - In the implementation block
+(id)localizedStringForCharacteristic:(id)arg1 ;
-(unsigned long long)infoType;
-(id)initWithAccessory:(id)arg1 infoType:(unsigned long long)arg2 ;
-(void)setInfoType:(unsigned long long)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(id)init;
@end

