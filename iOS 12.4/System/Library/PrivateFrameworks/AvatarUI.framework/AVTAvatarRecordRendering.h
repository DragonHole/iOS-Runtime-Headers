/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVTAvatarRecordRendering : NSObject
+(id)configurationForRecord:(id)arg1 coreModel:(id)arg2 ;
+(void)preloadAllAvatarsWithStore:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)imageForRecord:(id)arg1 scope:(id)arg2 ;
+(id)memojiForRecord:(id)arg1 ;
+(void)_castRecord:(id)arg1 andDoRecordHandlingBlock:(/*^block*/id)arg2 puppetHandlingBlock:(/*^block*/id)arg3 ;
+(void)preloadAvatarsWithIdentifiers:(id)arg1 store:(id)arg2 environment:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)preloadAllAvatarsWithStore:(id)arg1 environment:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)preloadAvatarsWithFetchRequests:(id)arg1 store:(id)arg2 environment:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)preloadAvatarsWithIdentifiers:(id)arg1 store:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)avatarForRecord:(id)arg1 ;
@end

