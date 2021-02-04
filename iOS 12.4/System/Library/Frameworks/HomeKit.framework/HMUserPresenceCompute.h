/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface HMUserPresenceCompute : NSObject {

	unsigned long long _value;

}

@property (nonatomic,readonly) NSNumber * number; 
@property (nonatomic,readonly) unsigned long long value;              //@synthesize value=_value - In the implementation block
+(id)computeWithMessage:(id)arg1 ;
+(id)computeWithDict:(id)arg1 ;
+(id)computeWithCoder:(id)arg1 ;
+(id)computeWithNumber:(id)arg1 ;
+(id)computeWithValue:(unsigned long long)arg1 ;
-(id)initWithNumber:(id)arg1 ;
-(NSNumber *)number;
-(void)addToCoder:(id)arg1 ;
-(void)addToPayload:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)value;
@end
