/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKIdentityServiceFetchPrivateKeysTaskResultObject : CATTaskResultObject {

	NSDictionary* _identityPrivateKeySetsByKeyPairMarkers;

}

@property (nonatomic,copy) NSDictionary * identityPrivateKeySetsByKeyPairMarkers;              //@synthesize identityPrivateKeySetsByKeyPairMarkers=_identityPrivateKeySetsByKeyPairMarkers - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)identityPrivateKeySetsByKeyPairMarkers;
-(void)setIdentityPrivateKeySetsByKeyPairMarkers:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

