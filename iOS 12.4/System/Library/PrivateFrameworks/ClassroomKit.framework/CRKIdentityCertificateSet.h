/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface CRKIdentityCertificateSet : NSObject <NSSecureCoding> {

	NSData* _activeIdentityCertificateData;
	NSData* _stagedIdentityCertificateData;

}

@property (nonatomic,copy,readonly) NSData * activeIdentityCertificateData;              //@synthesize activeIdentityCertificateData=_activeIdentityCertificateData - In the implementation block
@property (nonatomic,copy,readonly) NSData * stagedIdentityCertificateData;              //@synthesize stagedIdentityCertificateData=_stagedIdentityCertificateData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)activeIdentityCertificateData;
-(NSData *)stagedIdentityCertificateData;
-(id)initWithActiveIdentityCertificateData:(id)arg1 stagedIdentityCertificateData:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

