/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAction.h>

@class NSURL;

@interface VUIActionAppPunchout : VUIAction {

	NSURL* _punchoutURLWithoutAssociatedPlayable;

}

@property (nonatomic,readonly) NSURL * punchoutURLWithoutAssociatedPlayable;              //@synthesize punchoutURLWithoutAssociatedPlayable=_punchoutURLWithoutAssociatedPlayable - In the implementation block
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithContextData:(id)arg1 ;
-(BOOL)_openPunchoutURL:(id)arg1 isPlaybackURL:(BOOL)arg2 ;
-(NSURL *)punchoutURLWithoutAssociatedPlayable;
@end

