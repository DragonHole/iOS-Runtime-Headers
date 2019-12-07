/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface BLTMessageDigest : NSObject <NSSecureCoding> {

	NSData* _messageDigest;

}

@property (nonatomic,retain) NSData * messageDigest;              //@synthesize messageDigest=_messageDigest - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(NSData *)messageDigest;
-(BOOL)isEqualToMessageDigest:(id)arg1 ;
-(void)setMessageDigest:(NSData *)arg1 ;
@end
