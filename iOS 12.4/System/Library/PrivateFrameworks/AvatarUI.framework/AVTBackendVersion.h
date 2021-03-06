/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AVTBackendVersion : NSObject <NSSecureCoding> {

	double _backendVersion;
	double _avatarKitVersion;

}

@property (nonatomic,readonly) double backendVersion;                //@synthesize backendVersion=_backendVersion - In the implementation block
@property (nonatomic,readonly) double avatarKitVersion;              //@synthesize avatarKitVersion=_avatarKitVersion - In the implementation block
+(id)currentVersion;
+(id)versionFileLocationForStoreLocation:(id)arg1 ;
+(id)versionFromDiskAtLocation:(id)arg1 error:(id*)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)initWithBackendVersion:(double)arg1 avatarKitVersion:(double)arg2 ;
-(double)backendVersion;
-(double)avatarKitVersion;
-(BOOL)saveToDiskAtLocation:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

