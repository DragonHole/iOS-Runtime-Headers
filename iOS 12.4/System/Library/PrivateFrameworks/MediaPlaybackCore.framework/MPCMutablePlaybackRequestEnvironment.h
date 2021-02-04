/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCPlaybackRequestEnvironment.h>

@class NSString, MPCPlaybackDelegationProperties, MPCPrivateListeningStateSource;

@interface MPCMutablePlaybackRequestEnvironment : MPCPlaybackRequestEnvironment

@property (nonatomic,copy) NSString * clientIdentifier; 
@property (nonatomic,copy) NSString * clientVersion; 
@property (nonatomic,copy) NSString * requestingBundleIdentifier; 
@property (nonatomic,copy) NSString * requestingBundleVersion; 
@property (nonatomic,copy) MPCPlaybackDelegationProperties * delegationProperties; 
@property (nonatomic,copy) MPCPrivateListeningStateSource * privateListeningStateSource; 
-(void)setRequestingBundleIdentifier:(NSString *)arg1 ;
-(void)setRequestingBundleVersion:(NSString *)arg1 ;
-(void)setPrivateListeningStateSource:(MPCPrivateListeningStateSource *)arg1 ;
-(void)setDelegationProperties:(MPCPlaybackDelegationProperties *)arg1 ;
-(void)setClientVersion:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
@end
