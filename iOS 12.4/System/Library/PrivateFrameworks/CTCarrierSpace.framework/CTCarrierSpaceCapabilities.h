/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CTCarrierSpace/CTCarrierSpace-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTCarrierSpaceCapabilities : NSObject <NSCopying, NSSecureCoding> {

	BOOL _supportsServices;
	BOOL _supportsUsage;
	BOOL _supportsPlans;
	BOOL _supportsApplications;

}

@property (assign,nonatomic) BOOL supportsServices;                  //@synthesize supportsServices=_supportsServices - In the implementation block
@property (assign,nonatomic) BOOL supportsUsage;                     //@synthesize supportsUsage=_supportsUsage - In the implementation block
@property (assign,nonatomic) BOOL supportsPlans;                     //@synthesize supportsPlans=_supportsPlans - In the implementation block
@property (assign,nonatomic) BOOL supportsApplications;              //@synthesize supportsApplications=_supportsApplications - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)supportsUsage;
-(BOOL)supportsPlans;
-(BOOL)supportsServices;
-(BOOL)supportsApplications;
-(void)setSupportsServices:(BOOL)arg1 ;
-(void)setSupportsUsage:(BOOL)arg1 ;
-(void)setSupportsPlans:(BOOL)arg1 ;
-(void)setSupportsApplications:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
