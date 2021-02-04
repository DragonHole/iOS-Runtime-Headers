/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HMAccesorySettingDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class _HMAccessorySetting, HMAccessorySettingGroup, NSString;

@interface HMAccessorySetting : NSObject <_HMAccesorySettingDelegate, HMFLogging> {

	_HMAccessorySetting* _internal;
	HMAccessorySettingGroup* _group;

}

@property (readonly) _HMAccessorySetting * internal;                                  //@synthesize internal=_internal - In the implementation block
@property (__weak) HMAccessorySettingGroup * group;                                   //@synthesize group=_group - In the implementation block
@property (copy,readonly) NSString * keyPath; 
@property (readonly) Class valueClass; 
@property (getter=isWritable,readonly) BOOL writable; 
@property (copy,readonly) NSString * localizedTitle; 
@property (copy,readonly) id<NSObject><NSCopying><NSSecureCoding> value; 
@property (getter=isReflected,readonly) BOOL reflected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settingForInternal:(id)arg1 ;
+(id)logCategory;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)isWritable;
-(void)_settingWillUpdateReflected:(id)arg1 ;
-(void)_settingDidUpdateReflected:(id)arg1 ;
-(void)_settingWillUpdateValue:(id)arg1 ;
-(void)_settingDidUpdateValue:(id)arg1 ;
-(id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 ;
-(BOOL)isReflected;
-(void)updateValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(Class)valueClass;
-(_HMAccessorySetting *)internal;
-(id)logIdentifier;
-(id)initWithInternal:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id<NSObject><NSCopying><NSSecureCoding>)value;
-(NSString *)keyPath;
-(NSString *)localizedTitle;
-(HMAccessorySettingGroup *)group;
-(void)setGroup:(HMAccessorySettingGroup *)arg1 ;
@end
