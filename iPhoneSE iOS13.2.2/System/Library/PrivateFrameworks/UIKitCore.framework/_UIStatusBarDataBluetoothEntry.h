/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataEntry.h>

@class _UIStatusBarDataBatteryEntry;

@interface _UIStatusBarDataBluetoothEntry : _UIStatusBarDataEntry {

	long long _state;
	_UIStatusBarDataBatteryEntry* _batteryEntry;

}

@property (assign,nonatomic) long long state;                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataBatteryEntry * batteryEntry;              //@synthesize batteryEntry=_batteryEntry - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)_ui_descriptionBuilder;
-(_UIStatusBarDataBatteryEntry *)batteryEntry;
-(void)setBatteryEntry:(_UIStatusBarDataBatteryEntry *)arg1 ;
@end
