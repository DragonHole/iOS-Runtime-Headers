/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface CRKGenerateIdentityRequest : CATTaskRequest {

	NSString* _commonName;

}

@property (nonatomic,copy) NSString * commonName;              //@synthesize commonName=_commonName - In the implementation block
+(Class)whitelistedClassForResultObject;
+(BOOL)supportsSecureCoding;
-(NSString *)commonName;
-(void)setCommonName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

