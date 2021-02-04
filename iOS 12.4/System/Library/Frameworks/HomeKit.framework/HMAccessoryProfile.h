/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMObjectMerge.h>

@class _HMAccessoryProfile, NSUUID, NSArray, HMAccessory, NSString;

@interface HMAccessoryProfile : NSObject <HMObjectMerge> {

	_HMAccessoryProfile* _accessoryProfile;

}

@property (nonatomic,readonly) _HMAccessoryProfile * accessoryProfile;              //@synthesize accessoryProfile=_accessoryProfile - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,readonly) NSArray * services; 
@property (nonatomic,__weak,readonly) HMAccessory * accessory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(_HMAccessoryProfile *)accessoryProfile;
-(id)initWithAccessoryProfile:(id)arg1 ;
-(NSArray *)services;
-(HMAccessory *)accessory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSUUID *)uniqueIdentifier;
@end
