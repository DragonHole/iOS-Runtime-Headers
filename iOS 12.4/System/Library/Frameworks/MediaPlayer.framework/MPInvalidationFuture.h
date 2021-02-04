/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPFuture.h>

@class NSMapTable;

@interface MPInvalidationFuture : MPFuture {

	NSMapTable* _invalidationBlocks;
	BOOL _invalid;

}

@property (getter=isInvalid,nonatomic,readonly) BOOL invalid;              //@synthesize invalid=_invalid - In the implementation block
-(id)onInvalid:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)onInvalid:(/*^block*/id)arg1 ;
-(BOOL)isInvalid;
-(void)invalidate;
@end
